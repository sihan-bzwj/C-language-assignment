#define _CRT_SECURE_NO_WARNINGS//允许使用不安全的函数
#include <stdio.h>

int whole(double num);
double fracpart(double num);//函数声明

int main()
{
	double number;
	
	printf("Enter a floating-point value: ");
	scanf("%lf", &number);
	
	printf("The whole part is: %d\n", whole(number));//调用函数
	printf("The fractional part is:%g\n", fracpart(number));
	
	getchar();//防止输入缓冲区溢出
	getchar();//防止输入缓冲区溢出
	return 0;
}
int whole(double num) {
	return (int)num;
}
double fracpart(double num) {
	return num - (int)num;
}
