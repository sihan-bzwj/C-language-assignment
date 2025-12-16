#define _CRT_SECURE_NO_WARNINGS// To suppress security warnings for using standard C functions
#include <stdio.h>

struct Car {
    int id;
    int miles;
    int gallons;
};

int main() {
    struct Car cars[5];
    float total_mpg = 0.0;

    // 输入数据
    printf("输入汽车数据（ID、英里数、加仑数）：\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d %d %d", &cars[i].id, &cars[i].miles, &cars[i].gallons);
    }
        
    // 生成报告
    printf("\n汽车报告：\n");
    printf("汽车编号\t每加仑英里数\n");
    for (int i = 0; i < 5; i++) {
        float mpg = (float)cars[i].miles / cars[i].gallons;
        printf("%d\t\t%.2f\n", cars[i].id, mpg);
        total_mpg += mpg;
    }

    printf("\n车队平均每加仑英里数：%.2f\n", total_mpg / 5);

	getchar();// To keep the console window open if needed
    getchar();
    return 0;
}