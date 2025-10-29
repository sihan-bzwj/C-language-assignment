#define _CRT_SECURE_NO_WARNINGS//允许使用不安全的函数
#include<stdio.h>
long long factorial(int num) {
	long long result = 1;
	for(int i=1;i<=num;i++)
		result *= i;
	return result;
}

int main() {
	int m, n;
	long long x;
	
	printf("请输入总人数：");
	scanf("%i", & m );
	printf("请输入选择人数：");
	scanf("%i", &n);
	x = factorial(m) / (factorial(n) * factorial(m - n));

	printf("从 %i 个人中选择 %i 个人的组合数为：%lld\n", m,n,x);
	
	getchar();//清除缓冲区
	getchar();//
	return 0;
}