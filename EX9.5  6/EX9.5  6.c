#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
#include <string.h>
void countSentences(char* a, int*sentenceCount) {
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == '.' || a[i] == '?' || a[i] == '!') {
			(*sentenceCount)++;
		}
	}
}// 计算句子数
int main() {
    int sentenceCount = 0;
    char a[114514];

    printf("请输入一段文字：\n");
    
	while (a[0] != '\n') {
		fgets(a, sizeof(a), stdin); // 读取一行文字

		countSentences(a, &sentenceCount);
	}// 循环读取输入，直到输入结束
	printf("句子数：%d\n", sentenceCount);
	
	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}