#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

void bubble_sort_desc(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}// 冒泡排序降序

int main() {
	int m,n,arr1[250] = {0}, arr2[250] = {0}; 
	
	printf("Enter the number of elements in the first array: ");
	scanf("%d", &m);
	printf("Enter the elements of the first array: ");
	for (int i = 0; i < m; i++) {
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter the number of elements in the second array: ");
	scanf("%d", &n);
	printf("Enter the elements of the second array: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr2[i]);
	}// 输入两个数组
	
	bubble_sort_desc(arr1, m);
	bubble_sort_desc(arr2, n);// 进行排序
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr1[j] == arr2[i]) {
				printf("the  same elements are: %d,first array index: %d,second array index: %d\n", arr1[j], j+1, i+1);
			}
		}
	}// 输出相同元素及其索引

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}