#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
    // �۸���
    const double ARTICHOKE_PRICE = 2.05;
    const double BEET_PRICE = 1.15;
    const double CARROT_PRICE = 1.09;

    // �˷Ѷ���
    const double SHIPPING_UNDER_5 = 6.50;
    const double SHIPPING_UNDER_20 = 14.00;
    const double SHIPPING_OVER_20_RATE = 0.50;
    const double SHIPPING_OVER_20_BASE = 14.00;

    // �ۿ۶���
    const double DISCOUNT_RATE = 0.05;
    const double DISCOUNT_THRESHOLD = 100.00;

    // ��������
    double artichoke_pounds = 0.0;
    double beet_pounds = 0.0;
    double carrot_pounds = 0.0;

    char choice;
    double pounds;

    printf("Welcome to ABC Mail Order Grocery!\n");
    printf("===================================\n");

    // ��ѭ�� - �����û�����
    do {
        printf("\nPlease select an option:\n");
        printf("a) Add artichokes (currently: %.2f lbs)\n", artichoke_pounds);
        printf("b) Add beets (currently: %.2f lbs)\n", beet_pounds);
        printf("c) Add carrots (currently: %.2f lbs)\n", carrot_pounds);
        printf("q) Quit and calculate total\n");
        printf("Your choice: ");

        scanf(" %c", &choice);

        switch (choice) {
        case 'a':
        case 'A':
            printf("Enter pounds of artichokes to add: ");
            scanf("%lf", &pounds);
            if (pounds > 0) {
                artichoke_pounds += pounds;
                printf("Added %.2f lbs of artichokes.\n", pounds);
            }
            else {
                printf("Invalid amount. Please enter a positive number.\n");
            }
            break;

        case 'b':
        case 'B':
            printf("Enter pounds of beets to add: ");
            scanf("%lf", &pounds);
            if (pounds > 0) {
                beet_pounds += pounds;
                printf("Added %.2f lbs of beets.\n", pounds);
            }
            else {
                printf("Invalid amount. Please enter a positive number.\n");
            }
            break;

        case 'c':
        case 'C':
            printf("Enter pounds of carrots to add: ");
            scanf("%lf", &pounds);
            if (pounds > 0) {
                carrot_pounds += pounds;
                printf("Added %.2f lbs of carrots.\n", pounds);
            }
            else {
                printf("Invalid amount. Please enter a positive number.\n");
            }
            break;

        case 'q':
        case 'Q':
            printf("Proceeding to checkout...\n");
            break;

        default:
            printf("Invalid choice. Please enter a, b, c, or q.\n");
            break;
        }
    } while (choice != 'q' && choice != 'Q');

    // ���㶩������
    printf("\n=== ORDER SUMMARY ===\n");

    // ��������߲˵ķ���
    double artichoke_cost = artichoke_pounds * ARTICHOKE_PRICE;
    double beet_cost = beet_pounds * BEET_PRICE;
    double carrot_cost = carrot_pounds * CARROT_PRICE;

    // ��ʾ�����߲˵Ĺ�����Ϣ
    printf("Artichokes: $%.2f per lb, %.2f lbs, $%.2f\n",
        ARTICHOKE_PRICE, artichoke_pounds, artichoke_cost);
    printf("Beets:      $%.2f per lb, %.2f lbs, $%.2f\n",
        BEET_PRICE, beet_pounds, beet_cost);
    printf("Carrots:    $%.2f per lb, %.2f lbs, $%.2f\n",
        CARROT_PRICE, carrot_pounds, carrot_cost);

    // �����ܷ��ã��ۿ�ǰ��
    double subtotal = artichoke_cost + beet_cost + carrot_cost;
    printf("\nSubtotal (before discount): $%.2f\n", subtotal);

    // �����ۿ�
    double discount = 0.0;
    if (subtotal >= DISCOUNT_THRESHOLD) {
        discount = subtotal * DISCOUNT_RATE;
        printf("Discount (5%%): -$%.2f\n", discount);
    }

    // ������Ʒ�ܷ��ã��ۿۺ�
    double product_total = subtotal - discount;
    printf("Product total (after discount): $%.2f\n", product_total);

    // �������������˷�
    double total_pounds = artichoke_pounds + beet_pounds + carrot_pounds;
    double shipping_cost;

    if (total_pounds <= 5.0) {
        shipping_cost = SHIPPING_UNDER_5;
    }
    else if (total_pounds < 20.0) {
        shipping_cost = SHIPPING_UNDER_20;
    }
    else {
        // ������ֻ�Գ���20���Ĳ�����ȡÿ��$0.50
        shipping_cost = SHIPPING_OVER_20_BASE + ((total_pounds - 20) * SHIPPING_OVER_20_RATE);
    }

    printf("Shipping cost (%.2f lbs): $%.2f\n", total_pounds, shipping_cost);

    // ���������ܶ�
    double grand_total = product_total + shipping_cost;
    printf("\nGRAND TOTAL: $%.2f\n", grand_total);

    printf("\nThank you for your order!\n");

	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}