#define _CRT_SECURE_NO_WARNINGS//to disable the warning about using deprecated functions
#include <stdio.h>

static int numpal(int n) {
	int orig = n, count = 0;

	while (n > 0) {
		count = count * 10 + n % 10;
		n /= 10;
	}//converting the number to a single digit number and adding it to the count

	return count == orig;//if the count is equal to the original number, then it is a palindrome
}//function to check if a number is a palindrome or not

int main() {
	int n1,n2,n3,n4,n5;
	printf("Enter five numbers: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	printf("%d %d %d %d %d\n", numpal(n1),numpal(n2),numpal(n3),numpal(n4),numpal(n5));//calling the function to check if the number is a palindrome or not

	getchar(); //to clear the input buffer
	getchar();//to clear the input buffer
	return 0;
}