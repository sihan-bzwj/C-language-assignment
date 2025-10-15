#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	double year, money = 1000;

	for (float rate = 0.06; rate <= 0.12; rate += 0.01)
	{// 利率从 6% 到 12% 变化
	  for (year = 1; year <= 10; year++)
	   money *= (1 + rate);// 计算下一年的存款
	  printf("利率为%.2f，10年后的存款为%.2lf\n", rate, money);
	  money = 1000;// 复位为初始值
    }
	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}