#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ����������� scanf��
#include<stdio.h>

int main()
{
    double number,sum=0;//������ʼ��
    double average;

    /*��ʾ���벢��ȡ����*/
    
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

    // ����ƽ��ֵ
    average = sum / 4;

    // ��ʾ���
    printf("The average of the four numbers is: %.2f", average);

    printf("\n ���س����˳�...");
    getchar(); 
    getchar();
    return 0;
}