#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
    int year, weight;
    int weightClass;
    float fee;

    // ����������ݺ�����
    printf("�������������������: ");
    scanf("%d", &year);
    printf("����������������(��): ");
    scanf("%d", &weight);

    // ������ݺ�����ȷ�������ȼ��ͷ���
    if (year <= 1970) {
        if (weight < 2700) {
            weightClass = 1;
            fee = 16.50;
        }
        else if (weight <= 3800) {
            weightClass = 2;
            fee = 25.50;
        }
        else {
            weightClass = 3;
            fee = 46.50;
        }
    }
    else if (year <= 1979) {
        if (weight < 2700) {
            weightClass = 4;
            fee = 27.00;
        }
        else if (weight <= 3800) {
            weightClass = 5;
            fee = 30.50;
        }
        else {
            weightClass = 6;
            fee = 52.50;
        }
    }
    else { // 1980����Ժ�
        if (weight < 3500) {
            weightClass = 7;
            fee = 35.50;
        }
        else {
            weightClass = 8;
            fee = 65.50;
        }
    }

    // ������
    printf("\n=== ע����ü����� ===\n");
    printf("�������: %d��\n", year);
    printf("��������: %d��\n", weight);
    printf("�����ȼ�: %d\n", weightClass);
    printf("ע�����: $%.2f\n", fee);

    getchar(); // �ȴ��û����������ַ����˳�����
    getchar();
    return 0;
}