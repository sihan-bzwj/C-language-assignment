#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
	int year;
	printf("��������ݣ�");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0)
		printf("%d ������\n", year);
	else
		printf("%d ��ƽ��\n", year);

	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}