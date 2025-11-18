#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
void separate( char*str,float*a,float*b,float*c) {
	sscanf(str, "%f %f %f", a, b, c); // 用 sscanf 读取字符串中的数据
	}

int main() {
	char str[100];
	float a, b, c;
	
	printf("Enter a string(with space): ");
	fgets(str, 100, stdin); // 用 fgets 读取字符串
	
	separate(str, &a, &b, &c);//调用函数
	printf("a = %f, b = %f, c = %f\n", a, b, c);//输出结果


	getchar(); // 防止输入缓冲区溢出
	getchar(); // 防止输入缓冲区溢出
	return 0;
}