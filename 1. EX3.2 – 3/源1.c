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

	printf("�߳�Ϊ%.1f,%.1f��%.1f�����������Ϊ%.1f", a, b, c, area);

	getchar();
	return 0;
}