#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>
void time(int, int*, int*, int*); // ��������ԭ��
int main() {
	int total_sec; // ������
	int hours, min, sec; // Сʱ�����ӡ���
	
	printf("Enter total seconds: "); // ����������
	scanf("%i", &total_sec); // ��ȡ����
	time(total_sec, &hours, &min, &sec); // ���ú���
	printf("Total time is %i hours, %i minutes, and %i seconds.\n", hours, min, sec); // ������

	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}
void time(	int totalsec,int* hours, int* min, int* sec) { // ���庯��
	*hours=totalsec/3600; // ����Сʱ
	*min=totalsec/60-*hours*60; // �������
	*sec=totalsec-*hours*3600-*min*60; // ������
}