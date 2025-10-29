#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
void findMax(int a, int b, int* max) {
	if (a > b)
		*max = a;
	else
		*max = b;
}// 定义函数，输入两个整数，输出最大值
int main() {
	
	printf("请输入两个整数：");
	int a, b;
	scanf("%d%d", &a, &b);
	
	int max;
	findMax(a, b, &max);
	printf("最大值是：%d\n", max);// 输出最大值

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}