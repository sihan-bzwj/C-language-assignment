#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	int mouth, day;
	printf("请输入月份：");
	scanf("%d", &mouth);
	printf("请输入日期：");
	scanf("%d", &day);// 输入月份和日期
	
	// 判断月份是否正确
	switch (mouth) {// start switch
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day > 31 || day < 1)
			printf("日期错误！");
		else
			printf("%d月%d日", mouth, day);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (day > 30 || day < 1)
			printf("日期错误！");
		else
			printf("%d月%d日", mouth, day);
		break;
	case 2:
		if (day > 28 || day < 1)
			printf("日期错误！");
		else
		printf("%d月%d日", mouth, day);
		break;// end case 2
	default:
		printf("月份错误！");
		break;// end default
	}// end switch
	
	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}