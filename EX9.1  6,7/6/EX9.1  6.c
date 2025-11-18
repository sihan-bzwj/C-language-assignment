#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
#include <string.h>
void reverseString(char* str) {
	int len = strlen(str);
	for(int i=0; i<len/2; i++){
		char temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}
}
int main() {
	char str[100];
	printf("请输入字符串：");
	gets(str); // 读取字符串，包括空格
	
	reverseString(str); // 调用函数
	printf("反转后的字符串：%s", str); // 输出反转后的字符串

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}