#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	printf("Enter three numbers of a triangle: ");//输入三角形的三个边长
	scanf("%lf %lf %lf", &a, &b, &c);//读取输入的边长
	double s = (a + b + c) / 2;
	if (s* (s - a)* (s - b)* (s - c)>0) 
	{
		printf("The triangle is valid.\n");
		double area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("The area of the triangle is %.2lf\n", area);
	}//判断三角形是否为有效的并计算面积
	else
		printf("The triangle is not valid.\n");//输出错误信息
	
	getchar();
	getchar();
	return 0;
}