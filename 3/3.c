#define _CRT_SECURE_NO_WARNINGS// 防止scanf警告
#include <stdio.h>
#include <string.h>

#define MAX 10      // 最多10个字符串
#define LEN 100     // 每个字符串最大长度

// 函数声明
void print_original(char strs[][LEN], int n);
void print_ascii(char strs[][LEN], int n);
void print_by_length(char strs[][LEN], int n);

int main() {
    char strs[MAX][LEN];  // 存储字符串的二维数组
    int count = 0;        // 实际读取的字符串数量
    int choice;           // 用户选择
    
    // 1. 读取字符串
    printf("请输入字符串（最多%d个，空行结束）：\n", MAX);
    
    while (count < MAX) {
        printf("字符串%d：", count + 1);
        
        // 读取一行输入
        if (fgets(strs[count], LEN, stdin) == NULL) {
            break;  // 读到EOF
        }
        
        // 移除换行符
        strs[count][strlen(strs[count]) - 1] = '\0';
        
        // 如果输入空行，结束输入
        if (strlen(strs[count]) == 0) {
            break;
        }
        
        count++;
    }
    
    // 2. 菜单循环
    do {
        printf("\n===== 菜单 =====\n");
        printf("1. 打印原始列表\n");
        printf("2. 按ASCII顺序打印\n");
        printf("3. 按长度顺序打印\n");
        printf("4. 退出\n");
        printf("请选择：");
        scanf("%d", &choice);
        getchar();  // 吃掉回车符
        
        switch (choice) {
            case 1:
                print_original(strs, count);
                break;
            case 2:
                print_ascii(strs, count);
                break;
            case 3:
                print_by_length(strs, count);
                break;
            case 4:
                printf("再见！\n");
                break;
            default:
                printf("无效选择！\n");
        }
    } while (choice != 4);
    
    getchar();// 等待用户按下回车
	getchar();//清除输入缓冲区
    return 0;
}

// 1. 打印原始列表
void print_original(char strs[][LEN], int n) {
    printf("\n原始字符串列表：\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, strs[i]);
    }
}

// 2. 按ASCII顺序打印
void print_ascii(char strs[][LEN], int n) {
    // 创建副本，不修改原数组
    char copy[MAX][LEN];
    for (int i = 0; i < n; i++) {
        strcpy(copy[i], strs[i]);
    }
    
    // 简单的冒泡排序
    char temp[LEN];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(copy[j], copy[j + 1]) > 0) {
                strcpy(temp, copy[j]);
                strcpy(copy[j], copy[j + 1]);
                strcpy(copy[j + 1], temp);
            }
        }
    }
    
    printf("\n按ASCII顺序：\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, copy[i]);
    }
}

// 3. 按长度顺序打印
void print_by_length(char strs[][LEN], int n) {
    // 创建副本，不修改原数组
    char copy[MAX][LEN];
    for (int i = 0; i < n; i++) {
        strcpy(copy[i], strs[i]);
    }
    
    // 简单的冒泡排序（按长度）
    char temp[LEN];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strlen(copy[j]) > strlen(copy[j + 1])) {
                strcpy(temp, copy[j]);
                strcpy(copy[j], copy[j + 1]);
                strcpy(copy[j + 1], temp);
            }
        }
    }
    
    printf("\n按长度顺序：\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s (长度：%zu)\n", i + 1, copy[i], strlen(copy[i]));
    }
}