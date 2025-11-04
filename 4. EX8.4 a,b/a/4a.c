#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	char arr[114514]= {0}; // 定义一个长度为 114514 的数组
	int i = 0,total = 0,yuanyin=0;
	printf("请输入字母（无间隔）（输入回车结束）：");
	while (scanf("%c", &arr[i]) == 1 && arr[i]!='\n') {
		switch (arr[i]) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			yuanyin++;
			break;
		}// 统计元音字母的频率
		total++;
		i++;
	}
	printf("元音字母频率：%.2f\n", (double)yuanyin / total);// 计算元音字母频率并输出

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}