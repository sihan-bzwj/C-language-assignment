#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>
void date(int dates, int* month, int* day, int* year) {
	*month = dates / 100%100;
	*day = dates % 100;
	*year = dates / 10000;
}// ����ת������

int main() {
	printf("���������ڣ���ʽ��YYYYMMDD����");
	int dates;
	scanf("%d", &dates);
	
	int month, day, year;
	date(dates, &month, &day, &year);// ��������ת������
	printf("���ڣ�%d��%d��%d��\n", year, month, day);

	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}