#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
int main() {
	int a[21] = { 0 }, i = 0;

	printf("Enter 20 integers: ");
	while (scanf("%d", &a[i]) == 1 && i < 19) { i++; }
	printf("successfully read 20 integers\n");

	for (i = 1; i < 20; i++) {
		for (int j = 19; j >= i; j--) {
			if (a[j] > a[j - 1]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}//冒泡排序

	printf("Enter another number: ");
	scanf("%d", &a[20]);
	int k = 0;

	for (i = 0; i < 20; i++) {
		if (a[20] >= a[i] && i == 0) { printf("%d ", a[20]); }
		printf("%d ", a[i]);
		if (a[i] >= a[20] && a[20] >= a[i + 1] &&k == 0) { printf("%d ", a[20]); k = 1; }
		if (a[20] <= a[i] && i == 19) { printf("%d ", a[20]); }
	}//查找两个数的位置

	getchar();//读取回车符
	getchar();//读取回车符
	return 0;
}