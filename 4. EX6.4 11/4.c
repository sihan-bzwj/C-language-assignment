#define _CRT_SECURE_NO_WARNINGS//to avoid warnings
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	srand((unsigned int)time(NULL));//�����������
	int arr[3] = { 0 };//��������洢�����Ƶ�ֵ
	
	for (int i = 0; i <= 2; i++) {
		
		int num = rand() % 13 + 1;//�������1-13֮�������
		
		switch (num) {
		case 1:
			break;

		case 11:case 12:case 13:
			num = 10;
			printf("��%d����ֵΪ10\n",i+1);
			break;
		
		default:
			printf("��%d����ֵΪ%d\n", i+1, num);
			break;
		}
		arr[i] = num ;
	}//��ȡ����
	int sum = arr[1] + arr[2] + arr[0];
	do {
		for (int i = 0; i <= 2; i++) {
			if (arr[i] == 1) {
				arr[i] = 11;
				sum = arr[1] + arr[2] + arr[0];
				printf("��%d����ֵΪ11\n", i+1);
			}
		}
	} while (sum<= 21&&(arr[1]==1||arr[2]==1||arr[0]==1));//�ж��Ƿ���BlackJack
	
	printf("��������ֵΪ%d\n", sum);

		getchar();
		getchar();
		return 0;
	}