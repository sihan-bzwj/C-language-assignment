#include <stdio.h>

int main() {
	int age = 12, gift = 10,totalamout = 0;
	while (gift <= 1000)// 循环条件为 gift <= 1000
	{
		age++; // 年龄增加
		totalamout += gift; // 计算总价
		gift = gift*2; // 计算下一个礼物的价值
	}
	printf("总价为：%d\n", totalamout); // 输出总价
	printf("年龄为：%d\n", age); // 输出年龄

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}