#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
void date(int dates, int* month, int* day, int* year) {
	*month = dates / 100%100;
	*day = dates % 100;
	*year = dates / 10000;
}// 日期转换函数

int main() {
	printf("请输入日期（格式：YYYYMMDD）：");
	int dates;
	scanf("%d", &dates);
	
	int month, day, year;
	date(dates, &month, &day, &year);// 调用日期转换函数
	printf("日期：%d年%d月%d日\n", year, month, day);

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}