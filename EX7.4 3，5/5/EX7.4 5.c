#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>
void yrCalc(int total, int* years, int* months, int* days) {
	*years = total / 365+1900; // ��������
	*months = (total % 365) / 30+1; // ��������
	*days = (total % 365) % 30+1; // ��������
}

int main() {
	int total, years, months, days;
	
	printf("Enter the total number of days: ");
	scanf("%d", &total);
	
	yrCalc(total, &years, &months, &days);// ���ú���
	printf("1900.01.01 + %d days = %d.%d.%d\n",total, years, months, days);// ������
	
	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}