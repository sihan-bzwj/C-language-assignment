#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

void display_histogram(int am, int em, int im, int om, int um) {
	printf("a|");
	for (int i = 1; i <= am; i++) {printf("*");}
	printf("\n");
	printf("e|");
	for (int i = 1; i <= em; i++) {printf("*");}
	printf("\n");
	printf("i|");
	for (int i = 1; i <= im; i++) {printf("*");}
	printf("\n");
	printf("o|");
	for (int i = 1; i <= om; i++) {printf("*");}
	printf("\n");
	printf("u|");
	for (int i = 1; i <= um; i++) {printf("*");}
	printf("\n");
	printf(" +----|----|----|\n");
	printf(" 0    5    10   15\n");
}



int main() {
	char arr[114514] = { 0 }; // 定义一个长度为 114514 的数组
	int i = 0, total = 0, yuanyin = 0,am=0,em=0,im=0,om=0,um=0;
	printf("请输入字母（无间隔）（输入回车结束）：");
	while (scanf("%c", &arr[i]) == 1 && arr[i] != '\n') {
		switch (arr[i]) {
		case 'a':
		case 'A':
			am++;
			yuanyin++;
			break;
		case 'e':
		case 'E':
			em++;
			yuanyin++;
			break;
		case 'i':
		case 'I':
			im++;
			yuanyin++;
			break;
		case 'o':
		case 'O':
			om++;
			yuanyin++;
			break;
		case 'u':
		case 'U':
			um++;
			yuanyin++;
			break;
		}// 统计元音字母的频率
		total++;
		i++;
	}
	printf("元音字母频率：%.2f\n", (double)yuanyin / total);// 计算元音字母频率并输出

	display_histogram(am, em, im, om, um);// 输出字母频率直方图

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}