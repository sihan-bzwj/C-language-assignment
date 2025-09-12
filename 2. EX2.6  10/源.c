#include<stdio.h>;

int main()
{
	int T1 = 100;/*100 telepnones*/
	int T2 = 110;/*additional ten telephones*/
	int lines1 = T1 * (T1 - 1) / 2;
	int lines2= T2 * (T2 - 1) / 2;
	int additional_lines = lines2 - lines1;

	printf("对于 % i 部电话，所需的直接线路数量是 : % i\n"
		   "如果添加 10 部新电话，总电话数为 %i，所需的直接线路数量是: %i\n"
	       "额外所需的线路数量是: %i\n",
		    T1, lines1, T2, lines2, additional_lines);

	getchar();
	return 0;

}