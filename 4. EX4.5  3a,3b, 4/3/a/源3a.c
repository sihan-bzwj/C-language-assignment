#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	int year;
	printf("请输入年份：");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0)
		printf("%d 是闰年\n", year);
	else
		printf("%d 是平年\n", year);

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}