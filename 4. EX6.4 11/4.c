#define _CRT_SECURE_NO_WARNINGS//to avoid warnings
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	srand((unsigned int)time(NULL));//设置随机种子
	int arr[3] = { 0 };//定义数组存储三张牌的值
	
	for (int i = 0; i <= 2; i++) {
		
		int num = rand() % 13 + 1;//随机生成1-13之间的数字
		
		switch (num) {
		case 1:
			break;

		case 11:case 12:case 13:
			num = 10;
			printf("第%d张牌值为10\n",i+1);
			break;
		
		default:
			printf("第%d张牌值为%d\n", i+1, num);
			break;
		}
		arr[i] = num ;
	}//抽取手牌
	int sum = arr[1] + arr[2] + arr[0];
	do {
		for (int i = 0; i <= 2; i++) {
			if (arr[i] == 1) {
				arr[i] = 11;
				sum = arr[1] + arr[2] + arr[0];
				printf("第%d张牌值为11\n", i+1);
			}
		}
	} while (sum<= 21&&(arr[1]==1||arr[2]==1||arr[0]==1));//判断是否有BlackJack
	
	printf("三张牌总值为%d\n", sum);

		getchar();
		getchar();
		return 0;
	}