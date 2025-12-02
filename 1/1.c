#define _CRT_SECURE_NO_WARNINGS // 允许使用不安全的函数（如 scanf）
#include <stdio.h>
#include <string.h>

const char *string_in(const char *str1,const char* str2) {
	int len1 = strlen(str1), len2 = strlen(str2);
	int i = 0, j = 0;
	if(len1< len2){return NULL;}
	else {
		while (i < len1) {
			if (str1[i] == str2[j]) {
				i++;
				j++;// 继续比较
				if (j == len2) {
					return &str1[i - j];
				}// 找到匹配
			}
			else {
				i = i - j + 1;  // 回退到下一个位置
				j = 0;
			}
		}// 循环
	return NULL;
	}

}// 判断字符串2是否在字符串1中

int main() {
	while (1) {
		printf("输入0退出，输入其他继续：");
		char input; // 读取输入字符
        scanf(" %c", &input); // 读取输入字符
		if (input== '0'|| input == EOF) {
			getchar(); // 防止输入缓冲区溢出
			getchar(); // 防止输入缓冲区溢出
			return 0;} // 输入0退出
		//开始判断

		printf("请输入两个字符串：");
		char str1[100], str2[100];
		scanf("%s %s", str1, str2); // 读取输入字符串

		printf("结果：%s\n", string_in(str1, str2)); // 调用函数
	}// 循环
}