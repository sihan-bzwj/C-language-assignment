#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	int player = 1, round;
	double  average = 0, score = 0,total_average=0;//定义变量
	while (player <= 5)//循环5次
	{
		for (round = 1; round <= 3; round++)//循环3次
		{
			printf("请输入第%d位选手第%d局的得分：", player, round);
			scanf("%lf", &score);
			average += score;
		}//求每局的平均分
		average /= 3;//求每位选手的平均分
		total_average += average;
		printf("第%d位选手的平均分为：%.2lf\n", player, average);//输出每位选手的平均分
		player++;//换下一位选手
		average = 0;//清零平均分
	}
	printf("所有选手的平均分为：%.2lf\n", total_average / 5);//输出所有选手的平均分
	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}