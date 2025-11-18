#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int invalidReal(char*str) {
	int len=strlen(str), i=0,x=0;
	if (str[0] == '-' || str[0] == '+'|| str[0] == '.') {
		for (int j = 1; j < len; j++) {
			if (str[j] == '.') { i++; }
			if (!isdigit(str[j]) && str[j] != '.') { return 0; }
			if(isdigit(str[j])){x=1;}
			}
		if(i>1){return 0;}
	}

	else if (isdigit(str[0])) {
		for (int j = 0; j < len; j++) {
			if (str[j] == '.') { i++; }
			if (!isdigit(str[j]) && str[j] != '.') { return 0; }
			if (isdigit(str[j])) { x = 1; }
		}
		if (i > 1) { return 0; }
	}
	else{return 0;}
	return x;
}
int main() {
	char str[100];
	printf("请输入字符串：");
	scanf("%s", str); // 安全的函数，不会导致缓冲区溢出

	printf("%d\n", invalidReal(str));

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}