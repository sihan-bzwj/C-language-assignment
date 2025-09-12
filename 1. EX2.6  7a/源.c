#include<stdio.h>

int main()
{
	int x1 = 3;
	int y1 = 7;
	int x2 = 8;
	int y2 = 12;
	/*(x1,y1)and(x2,y2)are the coordinates ofthe twopoints*/
	int slope = (x1 - x2) / (y1 - y2);

	printf("the slope is %i", slope);
	getchar();
	return 0;
}