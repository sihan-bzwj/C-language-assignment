#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
	double year, money = 1000;

	for (float rate = 0.06; rate <= 0.12; rate += 0.01)
	{// ���ʴ� 6% �� 12% �仯
	  for (year = 1; year <= 10; year++)
	   money *= (1 + rate);// ������һ��Ĵ��
	  printf("����Ϊ%.2f��10���Ĵ��Ϊ%.2lf\n", rate, money);
	  money = 1000;// ��λΪ��ʼֵ
    }
	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}