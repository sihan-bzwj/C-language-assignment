#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
        int card1, card2, card3;
        int total = 0;
        int ace_count = 0;

        // ���������Ƶ�ֵ
        printf("�����������Ƶ�ֵ��1-13������1����A��11����J��12����Q��13����K��:\n");
        printf("��һ����: ");
        scanf("%d", &card1);
        printf("�ڶ�����: ");
        scanf("%d", &card2);
        printf("��������: ");
        scanf("%d", &card3);

        // ����ÿ���Ƶĵ�����ͳ��A������
        int cards[3] = { card1, card2, card3 };

        for (int i = 0; i < 3; i++) {
            if (cards[i] == 1) { // A
                ace_count++;
                total += 11; // �Ȱ�11����
            }
            else if (cards[i] >= 2 && cards[i] <= 10) { // 2-10
                total += cards[i];
            }
            else if (cards[i] >= 11 && cards[i] <= 13) { // J, Q, K
                total += 10;
            }
        }

        // ����A�ĵ���������ܵ�������21��
        while (total > 21 && ace_count > 0) {
            total -= 10; // ��һ��A��11����Ϊ1
            ace_count--;
        }

        // ��ʾ���
        printf("\n��ֵ: %d, %d, %d\n", card1, card2, card3);
        printf("�ܵ���: %d\n", total);

        if (total > 21) {
            printf("�����ˣ�\n");
        }
        else if (total == 21) {
            printf("�ڽܿˣ�\n");
        }
        else {
            printf("��ǰ����: %d\n", total);
        }                   
	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}