#include<stdio.h>;

int main()
{
	int T1 = 100;/*100 telepnones*/
	int T2 = 110;/*additional ten telephones*/
	int lines1 = T1 * (T1 - 1) / 2;
	int lines2= T2 * (T2 - 1) / 2;
	int additional_lines = lines2 - lines1;

	printf("���� % i ���绰�������ֱ����·������ : % i\n"
		   "������ 10 ���µ绰���ܵ绰��Ϊ %i�������ֱ����·������: %i\n"
	       "�����������·������: %i\n",
		    T1, lines1, T2, lines2, additional_lines);

	getchar();
	return 0;

}