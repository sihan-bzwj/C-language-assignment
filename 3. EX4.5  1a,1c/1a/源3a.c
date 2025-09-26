#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	int mouth, day;
	
	printf("Enter a month：");
	scanf("%d", &mouth);// 输入月份
	if (mouth < 1 || mouth > 12)  // 判断月份是否合法
		printf("Invalid month!\n");
		
	else
	{ // 月份合法
		printf("Enter a day of the month：");
		scanf("%d", &day);// 输入日期
		if (day < 1 || day > 31) // 判断日期是否合法
			printf("Invalid day!\n");
		else

		printf("The date is %d/%d\n", mouth, day);// 输出日期
	}
	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}