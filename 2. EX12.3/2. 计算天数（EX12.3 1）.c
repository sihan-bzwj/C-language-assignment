#define _CRT_SECURE_NO_WARNINGS// Disable deprecation warnings for standard C functions in Visual Studio
#include <stdio.h>

struct Date {
	int month;
	int day;
	int year;
};// Define a structure to hold date information

static int days(struct Date d) {
	return (d.year - 1900) * 360 + (d.month - 1) * 30 + d.day - 1;// Calculate the number of days from January 1, 1900 to the given date
}

int main() {
	struct Date date;
	printf("Enter a date (mm dd yyyy): ");
	scanf("%d %d %d", &date.month, &date.day, &date.year);

	printf("从1900年1月1日到%d/%d/%d的天数：%d\n", date.month, date.day, date.year, days(date));// Output the number of days from January 1, 1900 to the entered date

	getchar(); // Wait for user input before closing (useful in some environments)
	getchar();
	return 0;
}