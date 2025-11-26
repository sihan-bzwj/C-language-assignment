#define _CRT_SECURE_NO_WARNINGS// 取消CRT安全警告
#include <stdio.h>

// 5a: 读取并显示n个字符
void readBytes(FILE* file, long offset, int n) {
    fseek(file, offset, SEEK_SET);
    printf("读取的字符: ");
    for (int i = 0; i < n; i++) {
        int ch = fgetc(file);
        if (ch == EOF) break;
        printf("%c", ch);
    }
    printf("\n");
}

// 5b: 读取n个字符并存储到数组中
void readBytesToArray(FILE* file, long offset, int n, char* buffer) {
    fseek(file, offset, SEEK_SET);
    int i;
    for (i = 0; i < n; i++) {
        int ch = fgetc(file);
        if (ch == EOF) break;
        buffer[i] = (char)ch;
    }
    buffer[i] = '\0';
    printf("存储的字符: %s\n", buffer);
}

int main() {
    FILE* file = fopen("test.txt", "w+");
    fprintf(file, "Hello World! This is a test.");
    fclose(file);

    file = fopen("test.txt", "r");
    printf("测试5a:\n");
    readBytes(file, 6, 5);  // 输出: World

    printf("\n测试5b:\n");
    char buffer[20];
    readBytesToArray(file, 0, 5, buffer);  // 输出: Hello

    fclose(file);

    getchar();
    getchar();
    return 0;
}