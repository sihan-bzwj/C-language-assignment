#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
	int num,anti_num;
	printf("������һ��������");
	scanf("%d", &num);
	do {
		anti_num = num%10;// ȡ��num�����һλ����
		num/=10;// ȥ��num�����һλ����
		printf("%d", anti_num);// ���num�����һλ����
	}// �������num�ĸ�λ����
	while (num!= 0);// ѭ��ֱ��numΪ0

	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}