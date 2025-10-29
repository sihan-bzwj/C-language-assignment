#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
void time(int, int*, int*, int*); // 声明函数原型
int main() {
	int total_sec; // 总秒数
	int hours, min, sec; // 小时、分钟、秒
	
	printf("Enter total seconds: "); // 输入总秒数
	scanf("%i", &total_sec); // 读取输入
	time(total_sec, &hours, &min, &sec); // 调用函数
	printf("Total time is %i hours, %i minutes, and %i seconds.\n", hours, min, sec); // 输出结果

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}
void time(	int totalsec,int* hours, int* min, int* sec) { // 定义函数
	*hours=totalsec/3600; // 计算小时
	*min=totalsec/60-*hours*60; // 计算分钟
	*sec=totalsec-*hours*3600-*min*60; // 计算秒
}