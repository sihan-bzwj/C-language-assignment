#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Holiday {
    char date[20];
    char name[30];
};

struct Holiday holidays[10];
int count = 0;

// 显示所有节假日
void show() {
    printf("\n节假日列表:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s\n", i + 1, holidays[i].date, holidays[i].name);
    }
}

// 添加节假日
void add() {
    printf("日期: ");
    scanf("%s", holidays[count].date);
    printf("名称: ");
    scanf("%s", holidays[count].name);
    count++;
}

// 修改节假日
void modify() {
    int num;
    show();
    printf("修改哪个? ");
    scanf("%d", &num);
    if (num > 0 && num <= count) {
        printf("新日期: ");
        scanf("%s", holidays[num - 1].date);
        printf("新名称: ");
        scanf("%s", holidays[num - 1].name);
    }
}

// 删除节假日
void delete() {
    int num;
    show();
    printf("删除哪个? ");
    scanf("%d", &num);
    if (num > 0 && num <= count) {
        for (int i = num - 1; i < count - 1; i++) {
            holidays[i] = holidays[i + 1];
        }
        count--;
    }
}

// 排序
void sort() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(holidays[j].date, holidays[j + 1].date) > 0) {
                struct Holiday temp = holidays[j];
                holidays[j] = holidays[j + 1];
                holidays[j + 1] = temp;
            }
        }
    }
}

// 保存到文件
void save() {
    FILE* f = fopen("holidays.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(f, "%s %s\n", holidays[i].date, holidays[i].name);
    }
    fclose(f);
    printf("已保存!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1.显示 2.添加 3.修改 4.删除 5.保存退出 6.退出\n选择: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: show(); break;
        case 2: add(); break;
        case 3: modify(); break;
        case 4: delete(); break;
        case 5:
            sort();
            show();
            save();
            getchar();
            getchar();
            return 0;
        case 6: 
            getchar();
            getchar();
            return 0;
        }

        sort(); // 每次操作后自动排序
    }
}