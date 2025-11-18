#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
#include<string.h>
void delChar(char* str, int pos, int num) {
	int len = strlen(str);
	if (pos < 0 || pos >= len) {
		return;
	}
	else {
		int i;
		for (i = pos-1; i < len - num; i++) {
			str[i] = str[i + num];
		}
		str[len - num] = '\0';
	}
	printf("删除后的字符串为：%s\n", str);
}// 删除字符串中指定位置后的num个字符

int main() {
	int pos, num;
	char string[100];
	printf("请输入字符串：");
	fgets(string, 100, stdin); // 从标准输入读取字符串
	printf("请输入要删除的字符位置：");
	scanf("%d", &pos);
	printf("请输入要删除的字符个数：");
	scanf("%d", &num);
	delChar(string, pos, num); // 删除第13个字符后面的5个字符

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}