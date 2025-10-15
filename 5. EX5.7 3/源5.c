#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	int num,anti_num;
	printf("请输入一个整数：");
	scanf("%d", &num);
	do {
		anti_num = num%10;// 取出num的最后一位数字
		num/=10;// 去掉num的最后一位数字
		printf("%d", anti_num);// 输出num的最后一位数字
	}// 反向输出num的各位数字
	while (num!= 0);// 循环直到num为0

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}