#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    float rate;
    int hours;
    float regular_pay;
    float overtime_pay;
    float gross_pay;
} Employee;

void calculate_pay(Employee* emp) {
    if (emp->hours <= 40) {
        emp->regular_pay = emp->rate * emp->hours;
        emp->overtime_pay = 0;
    }
    else {
        emp->regular_pay = emp->rate * 40;
        emp->overtime_pay = emp->rate * 1.5 * (emp->hours - 40);
    }
    emp->gross_pay = emp->regular_pay + emp->overtime_pay;
}

int main() {
    FILE* file;
    Employee employees[4];
    int count = 0;

    // 创建数据文件
    file = fopen("employees.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(file, "Callaway, G. 6.00 40\n");
    fprintf(file, "Hanson, P. 5.00 48\n");
    fprintf(file, "Lasard, D. 6.50 35\n");
    fprintf(file, "Stillman, W. 8.00 50\n");
    fclose(file);

    // 读取数据文件
    file = fopen("employees.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(file, "%[^0-9] %f %d",
        employees[count].name,
        &employees[count].rate,
        &employees[count].hours) == 3) {
        calculate_pay(&employees[count]);
        count++;
        if (count >= 4) break;
    }
    fclose(file);

    // 打印工资报告
    printf("Name               Rate  Hours  Regular Pay  Overtime Pay  Gross Pay\n");
    printf("--------------------------------------------------------------------\n");

    float total_regular = 0, total_overtime = 0, total_gross = 0;

    for (int i = 0; i < count; i++) {
        printf("%-16s %5.2f %6d %12.2f %13.2f %10.2f\n",
            employees[i].name, employees[i].rate, employees[i].hours,
            employees[i].regular_pay, employees[i].overtime_pay,
            employees[i].gross_pay);

        total_regular += employees[i].regular_pay;
        total_overtime += employees[i].overtime_pay;
        total_gross += employees[i].gross_pay;
    }

    printf("--------------------------------------------------------------------\n");
    printf("Totals:                        %12.2f %13.2f %10.2f\n",
        total_regular, total_overtime, total_gross);

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}