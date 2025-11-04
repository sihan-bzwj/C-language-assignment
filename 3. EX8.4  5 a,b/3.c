#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	double grades[114514]= { 0 };
	double average=0,sum=0;
	int i = 0;
	
	printf("Please input the grades(when input negative number, the input will stop):\n");
	
	while (scanf("%lf", &grades[i]) == 1&&grades[i]>=0&&grades[i]<=100) {
		i++;
		sum += grades[i-1];
	}// 计算总分和平均分
	average = sum / i;
	printf("The sum of the grades is: %.2f\n", sum);
	printf("The average of the grades is: %.2f\n", average);
	printf("The grades are:\n");

	for (int j = 0; j < i; j++) {
		if (grades[j] >= 90) { printf("%.2f: A\n", grades[j]); }
		else if (grades[j] >= 80) { printf("%.2f: B\n", grades[j]); }
		else if (grades[j] >= 70) { printf("%.2f: C\n", grades[j]); }
		else if (grades[j] >= 60) { printf("%.2f: D\n", grades[j]); }
		else { printf("*%.2f: F\n", grades[j]); }
	}// 输出各分数对应的等级

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}