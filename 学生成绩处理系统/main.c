#define _CRT_SECURE_NO_WARNINGS// 防止安全警告
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"
#include "model.h"
#include "stu_service.h"
#include "stu_file.h"

// 全局变量
Node* student_list = NULL;

// 函数声明
void display_menu();
void add_student();
void modify_student();
void search_student();
void delete_student();
void sort_students();
void browse_students();
void save_students();
void load_students();

int main() {
    int choice;

    // 程序启动时自动加载数据
    student_list = load_from_file(FILENAME);

    do {
        display_menu();
        printf("请选择操作 (0-9): ");
        scanf("%d", &choice);
        getchar();  // 清除输入缓冲区

        switch (choice) {
        case 1:
            add_student();
            break;
        case 2:
            modify_student();
            break;
        case 3:
            search_student();
            break;
        case 4:
            delete_student();
            break;
        case 5:
            sort_students();
            break;
        case 6:
            browse_students();
            break;
        case 7:
            save_students();
            break;
        case 8:
            load_students();
            break;
        case 9:
            display_from_file(FILENAME);
            break;
        case 0:
            printf("正在退出系统...\n");
            save_to_file(student_list, FILENAME);
            free_all_nodes(&student_list);
            printf("感谢使用学生成绩处理系统！\n");
            break;
        default:
            printf("无效的选择，请重新输入！\n");
        }

        printf("\n按Enter键继续...");
        getchar();

    } while (choice != 0);

    getchar();
    getchar();
    return 0;
}

// 显示主菜单
void display_menu() {
    printf("\n=========== 学生成绩处理系统 ===========\n");
    printf("1. 录入学生信息\n");
    printf("2. 修改学生信息\n");
    printf("3. 查找学生信息\n");
    printf("4. 删除学生信息\n");
    printf("5. 成绩排序\n");
    printf("6. 浏览所有学生信息\n");
    printf("7. 保存学生信息到文件\n");
    printf("8. 从文件加载学生信息\n");
    printf("9. 直接查看文件内容\n");
    printf("0. 退出系统\n");
    printf("========================================\n");
}

// 录入学生信息
void add_student() {
    Student stu;

    printf("\n--- 录入学生信息 ---\n");

    printf("请输入学号: ");
    scanf("%s", stu.id);
    getchar();

    // 检查学号是否已存在
    if (find_node_by_id(student_list, stu.id) != NULL) {
        printf("错误：学号 %s 已存在！\n", stu.id);
        return;
    }

    printf("请输入姓名: ");
    scanf("%s", stu.name);
    getchar();

    printf("请输入数学成绩: ");
    scanf("%f", &stu.math);
    getchar();

    printf("请输入外语成绩: ");
    scanf("%f", &stu.english);
    getchar();

    printf("请输入计算机成绩: ");
    scanf("%f", &stu.computer);
    getchar();

    calculate_average(&stu);

    insert_node(&student_list, stu);
    printf("学生信息添加成功！\n");
}

// 修改学生信息
void modify_student() {
    char id[MAX_ID_LEN];
    Student new_stu;

    printf("\n--- 修改学生信息 ---\n");
    printf("请输入要修改的学生学号: ");
    scanf("%s", id);
    getchar();

    Node* node = find_node_by_id(student_list, id);
    if (node == NULL) {
        printf("未找到学号为 %s 的学生！\n", id);
        return;
    }

    printf("\n找到学生: %s %s\n", node->data.id, node->data.name);
    printf("当前成绩: 数学%.1f 外语%.1f 计算机%.1f 平均%.2f\n",
        node->data.math, node->data.english, node->data.computer, node->data.average);

    printf("\n请输入新的姓名: ");
    scanf("%s", new_stu.name);
    getchar();

    printf("请输入新的数学成绩: ");
    scanf("%f", &new_stu.math);
    getchar();

    printf("请输入新的外语成绩: ");
    scanf("%f", &new_stu.english);
    getchar();

    printf("请输入新的计算机成绩: ");
    scanf("%f", &new_stu.computer);
    getchar();

    strcpy(new_stu.id, id);  // 保持学号不变
    calculate_average(&new_stu);

    update_node_by_id(student_list, id, new_stu);
}

// 查找学生信息
void search_student() {
    char id[MAX_ID_LEN];

    printf("\n--- 查找学生信息 ---\n");
    printf("请输入要查找的学生学号: ");
    scanf("%s", id);
    getchar();

    Node* node = find_node_by_id(student_list, id);
    if (node != NULL) {
        printf("\n找到学生信息:\n");
        printf("学号: %s\n", node->data.id);
        printf("姓名: %s\n", node->data.name);
        printf("数学成绩: %.1f\n", node->data.math);
        printf("外语成绩: %.1f\n", node->data.english);
        printf("计算机成绩: %.1f\n", node->data.computer);
        printf("平均成绩: %.2f\n", node->data.average);
    }
    else {
        printf("未找到学号为 %s 的学生！\n", id);
    }
}

// 删除学生信息
void delete_student() {
    char id[MAX_ID_LEN];

    printf("\n--- 删除学生信息 ---\n");
    printf("请输入要删除的学生学号: ");
    scanf("%s", id);
    getchar();

    delete_node_by_id(&student_list, id);
}

// 成绩排序
void sort_students() {
    printf("\n--- 成绩排序 ---\n");

    if (student_list == NULL) {
        printf("暂无学生信息，请先录入数据！\n");
        return;
    }

    sort_by_average_desc(&student_list);
    printf("\n排序后的学生信息:\n");
    display_all_nodes(student_list);
}

// 浏览所有学生信息
void browse_students() {
    printf("\n--- 所有学生信息 ---\n");
    display_all_nodes(student_list);
}

// 保存学生信息
void save_students() {
    printf("\n--- 保存学生信息 ---\n");
    save_to_file(student_list, FILENAME);
}

// 加载学生信息
void load_students() {
    printf("\n--- 加载学生信息 ---\n");
    free_all_nodes(&student_list);
    student_list = load_from_file(FILENAME);
}