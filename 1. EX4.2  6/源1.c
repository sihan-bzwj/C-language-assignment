#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	printf("Enter three numbers of a triangle: ");//���������ε������߳�
	scanf("%lf %lf %lf", &a, &b, &c);//��ȡ����ı߳�
	double s = (a + b + c) / 2;
	if (s* (s - a)* (s - b)* (s - c)>0) 
	{
		printf("The triangle is valid.\n");
		double area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("The area of the triangle is %.2lf\n", area);
	}//�ж��������Ƿ�Ϊ��Ч�Ĳ��������
	else
		printf("The triangle is not valid.\n");//���������Ϣ
	
	getchar();
	getchar();
	return 0;
}