#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
	int player = 1, round;
	double  average=0,score=0;//�������player,round,average,score
	while(player<=5)//ѭ��5��
	{
		for (round = 1; round <= 3; round++)//ѭ��3��
		{
			printf("�������%dλѡ�ֵ�%d�ֵĵ÷֣�", player, round);
			scanf("%lf", &score);
			average += score;
		}//��ÿ�ֵ�ƽ����
		average /= 3;//��ÿλѡ�ֵ�ƽ����
		printf("��%dλѡ�ֵ�ƽ����Ϊ��%.2lf\n", player, average);//���ÿλѡ�ֵ�ƽ����
		player++;//����һλѡ��
		average = 0;//����ƽ����
	}
	
	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}