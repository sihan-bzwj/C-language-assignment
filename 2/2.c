#include <stdio.h>

int partition_desc(int arr[], int low, int high) {
	int pivot = arr[high];
    int i = low - 1;        // 指向小于基准区域的边界

    for (int j = low; j < high; j++) {
        // 如果当前元素大于等于基准，移到左边
        if (arr[j] >= pivot) {
            i++;
            // 交换元素
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // 将基准放到正确位置
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;

}//分区函数，返回分区点的索引

void quick_sort_desc(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition_desc(arr, low, high);
			quick_sort_desc(arr, low, pi - 1);
			quick_sort_desc(arr, pi + 1, high);
	}
}//重复快速排序

int main() {
	int arr[11] = { 30,40,-1,3,60,70,5,10,20,50,90 };
	quick_sort_desc(arr, 0, 10);
	for (int i = 0; i < 11; i++) {
		if (arr[i] < 20 || arr[i]>60) {
			printf("%d ", arr[i]);
		}
	}//输出数组中小于20或大于60的元素

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}