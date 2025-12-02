#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change_order(char* str) {
    char* words[100];
    int count = 0;

    char* token = strtok(str, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
}

int main() {
	char str[100]; // 定义一个字符数组用于存储输入的字符串
	printf("请输入字符串：");
	scanf("%[^\n]", str);// 输入字符串
    str[strlen(str)] = '\0'; // 添加字符串结束符

	change_order(str);// 调用函数改变顺序并输出

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}