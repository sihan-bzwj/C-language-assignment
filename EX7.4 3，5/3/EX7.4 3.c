#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>
void findMax(int a, int b, int* max) {
	if (a > b)
		*max = a;
	else
		*max = b;
}// ���庯������������������������ֵ
int main() {
	
	printf("����������������");
	int a, b;
	scanf("%d%d", &a, &b);
	
	int max;
	findMax(a, b, &max);
	printf("���ֵ�ǣ�%d\n", max);// ������ֵ

	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}