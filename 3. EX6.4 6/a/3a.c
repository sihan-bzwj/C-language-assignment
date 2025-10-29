#define _CRT_SECURE_NO_WARNINGS// To suppress warnings about unsafe functions in some compilers
#include <stdio.h>
#include <stdlib.h>
#include<time.h>// For seeding random number generator

int main() {
	srand(time(NULL));
	int random_number = rand() % 100+1; // Random number between 1 and 100
	int guess;

		printf("Welcome to the HI-LO game£¬you have 7 tries. ÇëÊäÈë1-100µÄÊý×Ö£º");
		scanf("%d", &guess);// Initial guess input

		for (int i = 1; i <= 7; i++) {
			if (guess < random_number) {
				if (i == 7)
				{
					printf("Sorry, you lose. The correct number was: %d¡£\n", random_number);
					break;
				}
				else
					printf("Wrong Number, Try Again - Too low.Guesses left:%d ",7-i);
				scanf("%d", &guess);
			}
			
			else if (guess > random_number) {
				if (i == 7)
				{
					printf(" Sorry, you lose. The correct number was:%d¡£\n", random_number);
					break;
				}
				else
					printf("Wrong Number, Try Again - Too high.Guesses left:%d ", 7 - i);
				scanf("%d", &guess);
			}
			
			else {
				printf("Hooray, you have won!\n");
				break;
			}
		}

	getchar();
	getchar();
	return 0;
}