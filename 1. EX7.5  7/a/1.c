#define _CRT_SECURE_NO_WARNINGS//to disable the warning about using deprecated functions
#include <stdio.h>

static int numpal(int n) {
	int orig = n,count = 0;
	
	while (n > 0) {
		count =count*10 + n % 10;
		n /= 10;
	}//converting the number to a single digit number and adding it to the count
	
	return count == orig;//if the count is equal to the original number, then it is a palindrome
}//function to check if a number is a palindrome or not

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("%d", numpal(n));//calling the function to check if the number is a palindrome or not

	getchar(); //to clear the input buffer
	getchar();//to clear the input buffer
	return 0;
}