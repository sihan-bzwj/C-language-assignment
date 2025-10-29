#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
void yrCalc(int total, int* years, int* months, int* days) {
	*years = total / 365+1900; // 计算年数
	*months = (total % 365) / 30+1; // 计算月数
	*days = (total % 365) % 30+1; // 计算天数
}

int main() {
	int total, years, months, days;
	
	printf("Enter the total number of days: ");
	scanf("%d", &total);
	
	yrCalc(total, &years, &months, &days);// 调用函数
	printf("1900.01.01 + %d days = %d.%d.%d\n",total, years, months, days);// 输出结果
	
	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}