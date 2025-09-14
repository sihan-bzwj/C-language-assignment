#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（尤其是 scanf）
#include<stdio.h>

int main()
{
	float TAXRATE = 0.06;
	float cost_per_item, discount_rate, total_cost,
		  discounted_total, tax_due, amount_due;
	int number_of_items;

	//提示单价
	printf("Enter the cost per item: ");
	scanf("%f", &cost_per_item);

    // 提示数量
    printf("Enter the number of items purchased: ");
    scanf("%i", &number_of_items);

    // 提示折扣率 (e.g.,0.1 is 10%)
    printf("Enter the discount rate (e.g., 0.1 is 10%): ");
    scanf("%f", &discount_rate);

    // 算总价
    total_cost = number_of_items * cost_per_item;

    // 算折后总价
    discounted_total = total_cost - (discount_rate * total_cost);

    // 算税
    tax_due = discounted_total * TAXRATE;

    // 算税后总价
    amount_due = discounted_total + tax_due;

    
    printf("\nTotal cost: $%.2f\n", total_cost);
    printf("Discounted total cost: $%.2f\n", discounted_total);
    printf("Tax due: $%.2f\n", tax_due);
    printf("Amount due: $%.2f\n", amount_due);


    printf("\n 按回车键退出...");
    getchar();
    getchar();
    return 0;
}