#include <stdio.h>

int main() {
	int age = 12, gift = 10,totalamout = 0;
	while (gift <= 1000)// ѭ������Ϊ gift <= 1000
	{
		age++; // ��������
		totalamout += gift; // �����ܼ�
		gift = gift*2; // ������һ������ļ�ֵ
	}
	printf("�ܼ�Ϊ��%d\n", totalamout); // ����ܼ�
	printf("����Ϊ��%d\n", age); // �������

	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}