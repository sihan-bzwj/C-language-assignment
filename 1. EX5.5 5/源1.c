#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
	int mouth, day;
	printf("�������·ݣ�");
	scanf("%d", &mouth);
	printf("���������ڣ�");
	scanf("%d", &day);// �����·ݺ�����
	
	// �ж��·��Ƿ���ȷ
	switch (mouth) {// start switch
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day > 31 || day < 1)
			printf("���ڴ���");
		else
			printf("%d��%d��", mouth, day);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (day > 30 || day < 1)
			printf("���ڴ���");
		else
			printf("%d��%d��", mouth, day);
		break;
	case 2:
		if (day > 28 || day < 1)
			printf("���ڴ���");
		else
		printf("%d��%d��", mouth, day);
		break;// end case 2
	default:
		printf("�·ݴ���");
		break;// end default
	}// end switch
	
	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}