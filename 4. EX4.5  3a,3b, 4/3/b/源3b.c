#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>

int main() {
	int year;
	printf("请输入年份：");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d 是闰年\n", year);
        int month, day;
        int valid_day = 1; // 标记日期是否有效

        printf("Enter a month: ");
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            printf("Invalid month!\n");
        }
        else {
            printf("Enter a day of the month: ");
            scanf("%d", &day);

            // 检查日期是否在基本范围内
            if (day < 1 || day > 31) {
                printf("Invalid day!\n");
                valid_day = 0;
            }
            else {
                // 根据月份检查日期有效性
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
                    // 31-day months (1,3,5,7,8,10,12)不需要额外检查，因为已经检查过day<=31
                default:
                    break;
                }
            }

            // 只有当月份和日期都有效时才输出日期
            if (valid_day) {
                printf("The date is %d/%d\n", month, day);
            }
        }

	}
    else
    {
        printf("%d 是平年\n", year);
        int month, day;
        int valid_day = 1; // 标记日期是否有效

        printf("Enter a month: ");
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            printf("Invalid month!\n");
        }
        else {
            printf("Enter a day of the month: ");
            scanf("%d", &day);

            // 检查日期是否在基本范围内
            if (day < 1 || day > 31) {
                printf("Invalid day!\n");
                valid_day = 0;
            }
            else {
                // 根据月份检查日期有效性
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
                    // 31-day months (1,3,5,7,8,10,12)不需要额外检查，因为已经检查过day<=31
                default:
                    break;
                }
            }

            // 只有当月份和日期都有效时才输出日期
            if (valid_day) {
                printf("The date is %d/%d\n", month, day);
            }
        }

    }
	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}