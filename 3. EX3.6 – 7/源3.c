#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ����������� scanf��
#include<stdio.h>

int main()
{
	float TAXRATE = 0.06;
	float cost_per_item, discount_rate, total_cost,
		  discounted_total, tax_due, amount_due;
	int number_of_items;

	//��ʾ����
	printf("Enter the cost per item: ");
	scanf("%f", &cost_per_item);

    // ��ʾ����
    printf("Enter the number of items purchased: ");
    scanf("%i", &number_of_items);

    // ��ʾ�ۿ��� (e.g.,0.1 is 10%)
    printf("Enter the discount rate (e.g., 0.1 is 10%): ");
    scanf("%f", &discount_rate);

    // ���ܼ�
    total_cost = number_of_items * cost_per_item;

    // ���ۺ��ܼ�
    discounted_total = total_cost - (discount_rate * total_cost);

    // ��˰
    tax_due = discounted_total * TAXRATE;

    // ��˰���ܼ�
    amount_due = discounted_total + tax_due;

    
    printf("\nTotal cost: $%.2f\n", total_cost);
    printf("Discounted total cost: $%.2f\n", discounted_total);
    printf("Tax due: $%.2f\n", tax_due);
    printf("Amount due: $%.2f\n", amount_due);


    printf("\n ���س����˳�...");
    getchar();
    getchar();
    return 0;
}