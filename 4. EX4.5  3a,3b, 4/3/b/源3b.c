#define _CRT_SECURE_NO_WARNINGS // ����ʹ�ò���ȫ�ĺ������� scanf��
#include <stdio.h>

int main() {
	int year;
	printf("��������ݣ�");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d ������\n", year);
        int month, day;
        int valid_day = 1; // ��������Ƿ���Ч

        printf("Enter a month: ");
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            printf("Invalid month!\n");
        }
        else {
            printf("Enter a day of the month: ");
            scanf("%d", &day);

            // ��������Ƿ��ڻ�����Χ��
            if (day < 1 || day > 31) {
                printf("Invalid day!\n");
                valid_day = 0;
            }
            else {
                // �����·ݼ��������Ч��
                switch (month) {
                case 2: // February - 29 days
                    if (day > 29) {
                        printf("Invalid day! February has only 29 days.\n");
                        valid_day = 0;
                    }
                    break;
                case 4: case 6: case 9: case 11: // 30-day months
                    if (day > 30) {
                        printf("Invalid day! This month has only 30 days.\n");
                        valid_day = 0;
                    }
                    break;
                    // 31-day months (1,3,5,7,8,10,12)����Ҫ�����飬��Ϊ�Ѿ�����day<=31
                default:
                    break;
                }
            }

            // ֻ�е��·ݺ����ڶ���Чʱ���������
            if (valid_day) {
                printf("The date is %d/%d\n", month, day);
            }
        }

	}
    else
    {
        printf("%d ��ƽ��\n", year);
        int month, day;
        int valid_day = 1; // ��������Ƿ���Ч

        printf("Enter a month: ");
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            printf("Invalid month!\n");
        }
        else {
            printf("Enter a day of the month: ");
            scanf("%d", &day);

            // ��������Ƿ��ڻ�����Χ��
            if (day < 1 || day > 31) {
                printf("Invalid day!\n");
                valid_day = 0;
            }
            else {
                // �����·ݼ��������Ч��
                switch (month) {
                case 2: // February - 28 days
                    if (day > 28) {
                        printf("Invalid day! February has only 28 days.\n");
                        valid_day = 0;
                    }
                    break;
                case 4: case 6: case 9: case 11: // 30-day months
                    if (day > 30) {
                        printf("Invalid day! This month has only 30 days.\n");
                        valid_day = 0;
                    }
                    break;
                    // 31-day months (1,3,5,7,8,10,12)����Ҫ�����飬��Ϊ�Ѿ�����day<=31
                default:
                    break;
                }
            }

            // ֻ�е��·ݺ����ڶ���Чʱ���������
            if (valid_day) {
                printf("The date is %d/%d\n", month, day);
            }
        }

    }
	getchar(); // ��ֹ���뻺�������
	getchar(); // ��ֹ���뻺�������
	return 0;
}