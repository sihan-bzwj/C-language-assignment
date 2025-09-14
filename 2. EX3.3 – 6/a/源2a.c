#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（尤其是 scanf）
#include<stdio.h>

int main()
{
    double n1, n2, n3, n4;
    double average;

    /*提示输入并读取数字*/
    printf("Enter a number: ");
    scanf("%lf", &n1);

    printf("Enter a second number: ");
    scanf("%lf", &n2);

    printf("Enter a third number: ");
    scanf("%lf", &n3);

    printf("Enter a fourth number: ");
    scanf("%lf", &n4);

    // 计算平均值
    average = (n1 + n2 + n3 + n4) / 4;

    // 显示结果
    printf("The average of the four numbers is: %.2f", average);

    printf("\n按回车键退出...");
    getchar();
    getchar();
    return 0;
}