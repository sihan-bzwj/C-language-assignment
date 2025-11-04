#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

void extend(float price[], float quantity[], float amount[]) {
	int i = 0;
	while (i < 10) {
		amount[i] = price[i] * quantity[i]; // 计算每种商品的总价
		i++;
	}
}

int main() {
	float price[10] = { 10.62,14.89,13.21,16.55, 18.62,9.47,6.58,18.32,12.15, 3.98 };
	float quantity[10] = { 4,8.5,6,8.35,9,15.3,3,5.4,2.9,4.8 };
	float amount[10]={0};// 定义一个数组，用于存储计算结果
    int i = 0;

	extend(price, quantity, amount); // 调用函数
	
	while (i < 10) {
		printf("%.2f ", amount[i]);
		i++;
	}

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}