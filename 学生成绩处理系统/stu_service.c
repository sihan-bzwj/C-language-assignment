#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stu_service.h"

// 创建新节点
Node* create_node(Student stu) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("内存分配失败！\n");
        return NULL;
    }
    new_node->data = stu;
    new_node->next = NULL;
    return new_node;
}

// 插入节点到链表尾部
void insert_node(Node** head, Student stu) {
    Node* new_node = create_node(stu);
    if (new_node == NULL) return;

    if (*head == NULL) {
        *head = new_node;
    }
    else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// 根据学号删除节点
void delete_node_by_id(Node** head, char* id) {
    if (*head == NULL) {
        printf("链表为空！\n");
        return;
    }

    Node* current = *head;
    Node* previous = NULL;

    while (current != NULL) {
        if (strcmp(current->data.id, id) == 0) {
            if (previous == NULL) {
                *head = current->next;
            }
            else {
                previous->next = current->next;
            }
            free(current);
            printf("学号为 %s 的学生信息已删除！\n", id);
            return;
        }
        previous = current;
        current = current->next;
    }
    printf("未找到学号为 %s 的学生！\n", id);
}

// 根据学号查找节点
Node* find_node_by_id(Node* head, char* id) {
    Node* current = head;
    while (current != NULL) {
        if (strcmp(current->data.id, id) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// 根据学号更新节点
void update_node_by_id(Node* head, char* id, Student new_stu) {
    Node* node = find_node_by_id(head, id);
    if (node != NULL) {
        strcpy(node->data.name, new_stu.name);
        node->data.math = new_stu.math;
        node->data.english = new_stu.english;
        node->data.computer = new_stu.computer;
        calculate_average(&(node->data));
        printf("学生信息更新成功！\n");
    }
    else {
        printf("未找到学号为 %s 的学生！\n", id);
    }
}

// 显示所有节点
void display_all_nodes(Node* head) {
    if (head == NULL) {
        printf("暂无学生信息！\n");
        return;
    }

    printf("\n%-12s %-10s %-8s %-8s %-10s %-10s\n",
        "学号", "姓名", "数学", "外语", "计算机", "平均成绩");
    printf("------------------------------------------------------------\n");

    Node* current = head;
    while (current != NULL) {
        printf("%-12s %-10s %-8.1f %-8.1f %-10.1f %-10.2f\n",
            current->data.id,
            current->data.name,
            current->data.math,
            current->data.english,
            current->data.computer,
            current->data.average);
        current = current->next;
    }
    printf("------------------------------------------------------------\n");
}

// 释放所有节点内存
void free_all_nodes(Node** head) {
    Node* current = *head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

// 计算平均成绩
void calculate_average(Student* stu) {
    stu->average = (stu->math + stu->english + stu->computer) / 3.0;
}

// 按平均成绩排序（冒泡排序）
void sort_by_average_desc(Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }

    int swapped;
    Node* ptr1;
    Node* lptr = NULL;

    do {
        swapped = 0;
        ptr1 = *head;

        while (ptr1->next != lptr) {
            if (ptr1->data.average < ptr1->next->data.average) {
                // 交换节点数据
                Student temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);

    printf("按平均成绩从高到低排序完成！\n");
}

// 统计节点数量
int count_nodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}