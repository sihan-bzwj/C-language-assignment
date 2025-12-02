#define _CRT_SECURE_NO_WARNINGS// Disable security warnings for functions like strcpy
#include <stdio.h>
#include <string.h>

void trimfmt(char *str) {
	char* p = str;// Initialize pointer p to the start of the string
		p += strlen(str) - 1;// Move pointer p to the end of the string
		while (p>=strlen(str)&&*p == ' ') p--;// Move pointer p backwards while there are spaces

		printf("'");
		for (int i = 0; i < p-str+1; i++) {
			printf("%c", str[i]);//输出每个字符并加单引号
		}
		printf("'\n");
}


int main(){
	printf("请输入一个字符串(以回车结束)：");

	char str[1000];

	fgets(str, sizeof(str), stdin);//读取字符串
	str[strcspn(str, "\n")] = '\0';//去除换行符

	trimfmt(str);//去除字符串末尾空格

	getchar();//清除缓冲区
	getchar();//清除缓冲区
	return 0;
}