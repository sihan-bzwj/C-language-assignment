#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ����������� scanf��
#include<stdio.h>

int main()
{
    double n1, n2, n3, n4;
    double average;

    /*��ʾ���벢��ȡ����*/
    printf("Enter a number: ");
    scanf("%lf", &n1);

    printf("Enter a second number: ");
    scanf("%lf", &n2);

    printf("Enter a third number: ");
    scanf("%lf", &n3);

    printf("Enter a fourth number: ");
    scanf("%lf", &n4);

    // ����ƽ��ֵ
    average = (n1 + n2 + n3 + n4) / 4;

    // ��ʾ���
    printf("The average of the four numbers is: %.2f", average);

    printf("\n���س����˳�...");
    getchar();
    getchar();
    return 0;
}