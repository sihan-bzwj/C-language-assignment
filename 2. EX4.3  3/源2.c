#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
	double tempreture;
	char letter;

	printf("Enter temperature in celsius or fahrenheit: ");
	scanf("%lf %c",&tempreture, &letter);

	if (letter == 'c')
	{
		tempreture = (9.0 / 5.0) * tempreture + 32.0;// ת��Ϊ���϶�
		printf("the temperature is %.2f f", tempreture);
	}
	else if (letter == 'f')
	{
		tempreture = (5.0 / 9.0) * (tempreture - 32.0);// ת��Ϊ���϶�
		printf("the temperature is %.2f c", tempreture);
	}
	else
		printf("invalid input");

	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}
