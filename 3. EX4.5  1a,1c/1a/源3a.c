#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
	int mouth, day;
	
	printf("Enter a month��");
	scanf("%d", &mouth);// �����·�
	if (mouth < 1 || mouth > 12)  // �ж��·��Ƿ�Ϸ�
		printf("Invalid month!\n");
		
	else
	{ // �·ݺϷ�
		printf("Enter a day of the month��");
		scanf("%d", &day);// ��������
		if (day < 1 || day > 31) // �ж������Ƿ�Ϸ�
			printf("Invalid day!\n");
		else

		printf("The date is %d/%d\n", mouth, day);// �������
	}
	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}