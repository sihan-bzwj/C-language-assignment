#define _CRT_SECURE_NO_WARNINGS// Disable deprecation warnings for standard C functions in MSVC
#include <stdio.h>

void display_day(int day) {
	char* days[] = {
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday" };
	printf("对应的星期是：%s\n", (day >= 1 && day <= 7) ? days[day - 1] : "输入错误");
}

int main() {
	int day;
	printf("请输入一个1-7之间的整数：");
	scanf("%d", &day);

	display_day(day);

	getchar();//清除缓冲区中的换行符
	getchar();//清除缓冲区中的换行符
	return 0;
}