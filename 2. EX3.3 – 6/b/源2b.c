#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（尤其是 scanf）
#include<stdio.h>

int main()
{
    double number,sum=0;//变量初始化
    double average;

    /*提示输入并读取数字*/
    
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum = sum + number;

    printf("Enter a second number: ");
    scanf("%lf", &number);
    sum = sum + number;

    printf("Enter a third number: ");
    scanf("%lf", &number);
    sum = sum + number;

    printf("Enter a fourth number: ");
    scanf("%lf", &number);
    sum = sum + number;

    // 计算平均值
    average = sum / 4;

    // 显示结果
    printf("The average of the four numbers is: %.2f", average);

    printf("\n 按回车键退出...");
    getchar(); 
    getchar();
    return 0;
}