#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stu_file.h"
#include "stu_service.h"

// 保存链表到文件
int save_to_file(Node* head, const char* filename) {
    FILE* file = fopen(filename, "wb");
    if (file == NULL) {
        printf("无法打开文件 %s 进行写入！\n", filename);
        return 0;
    }

    Node* current = head;
    int count = 0;

    while (current != NULL) {
        fwrite(&(current->data), sizeof(Student), 1, file);
        count++;
        current = current->next;
    }

    fclose(file);
    printf("成功保存 %d 条学生记录到文件 %s\n", count, filename);
    return count;
}

// 从文件加载数据到链表
Node* load_from_file(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        printf("无法打开文件 %s，可能是第一次运行或文件不存在\n", filename);
        return NULL;
    }

    Node* head = NULL;
    Student stu;

    while (fread(&stu, sizeof(Student), 1, file) == 1) {
        insert_node(&head, stu);
    }

    fclose(file);
    printf("从文件 %s 加载了 %d 条学生记录\n", filename, count_nodes(head));
    return head;
}

// 从文件直接显示数据（不加载到内存）
void display_from_file(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        printf("无法打开文件 %s\n", filename);
        return;
    }

    printf("\n%-12s %-10s %-8s %-8s %-10s %-10s\n",
        "学号", "姓名", "数学", "外语", "计算机", "平均成绩");
    printf("------------------------------------------------------------\n");

    Student stu;
    int count = 0;

    while (fread(&stu, sizeof(Student), 1, file) == 1) {
        printf("%-12s %-10s %-8.1f %-8.1f %-10.1f %-10.2f\n",
            stu.id, stu.name, stu.math, stu.english, stu.computer, stu.average);
        count++;
    }

    printf("------------------------------------------------------------\n");
    printf("共 %d 条记录\n", count);

    fclose(file);
}