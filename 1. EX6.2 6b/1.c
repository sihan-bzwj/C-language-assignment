#define _CRT_SECURE_NO_WARNINGS//����ʹ�ò���ȫ�ĺ���
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
	
	printf("��������������");
	scanf("%i", & m );
	printf("������ѡ��������");
	scanf("%i", &n);
	x = factorial(m) / (factorial(n) * factorial(m - n));

	printf("�� %i ������ѡ�� %i ���˵������Ϊ��%lld\n", m,n,x);
	
	getchar();//���������
	getchar();//
	return 0;
}