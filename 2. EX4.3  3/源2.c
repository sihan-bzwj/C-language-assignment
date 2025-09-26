#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	double tempreture;
	char letter;

	printf("Enter temperature in celsius or fahrenheit: ");
	scanf("%lf %c",&tempreture, &letter);

	if (letter == 'c')
	{
		tempreture = (9.0 / 5.0) * tempreture + 32.0;// 转换为华氏度
		printf("the temperature is %.2f f", tempreture);
	}
	else if (letter == 'f')
	{
		tempreture = (5.0 / 9.0) * (tempreture - 32.0);// 转换为摄氏度
		printf("the temperature is %.2f c", tempreture);
	}
	else
		printf("invalid input");

	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}
