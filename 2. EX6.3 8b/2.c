#define _CRT_SECURE_NO_WARNINGS//����ʹ�ò���ȫ�ĺ���
#include <stdio.h>

int whole(double num);
double fracpart(double num);//��������

int main()
{
	double number;
	
	printf("Enter a floating-point value: ");
	scanf("%lf", &number);
	
	printf("The whole part is: %d\n", whole(number));//���ú���
	printf("The fractional part is:%g\n", fracpart(number));
	
	getchar();//��ֹ���뻺�������
	getchar();//��ֹ���뻺�������
	return 0;
}
int whole(double num) {
	return (int)num;
}
double fracpart(double num) {
	return num - (int)num;
}
