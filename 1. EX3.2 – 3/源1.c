#include<stdio.h>
#include<math.h>

int main()
{
	float a = 3;
	float b = 4;
	float c = 5;
	/*a,b and c are the three sides of the triangle*/
	
    float s = (a + b + c) / 2;
	/*half perimeter*/
	float area = sqrt(s * (s - a) * (s - b) * (s - c));

	printf("边长为%.1f,%.1f和%.1f的三角形面积为%.1f", a, b, c, area);

	getchar();
	return 0;
}