#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

void store(double arr[3][5]) {
	for (int i = 0; i < 3; i++) {
		printf("请输入第%d行的5个数：", i + 1);
		for (int j = 0; j < 5; j++) { scanf("%lf", &arr[i][j]); }
	}
}

double average_row(double arr[3][5],int row) {
	double sum = 0;
	for (int j = 0; j < 5; j++) { sum += arr[row][j]; }
		return sum / 5;
}

double average(double arr[3][5]) {
	double sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) { sum += arr[i][j]; }
	}
	return sum / 15;
}

	double max(double arr[3][5]) {
		double max = arr[0][0];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				if (arr[i][j] > max) { max = arr[i][j]; }
			}
		}
		return max;
	}
int main() {
	int arr[3][5] = { 0 },row=0;//定义二维数组
	store(arr);
	for (int row = 0; row < 3; row++) {
		printf("第%d行的平均数为：%.2f\n", row + 1, average_row(arr, row));
	}
	printf("总体平均数为：%.2f\n", average(arr));
	
	printf("总体最大数为：%.2f\n", max(arr));


	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}