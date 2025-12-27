#ifndef STU_SERVICE_H
#define STU_SERVICE_H

#include "model.h"

// 链表操作函数
Node* create_node(Student stu);
void insert_node(Node** head, Student stu);
void delete_node_by_id(Node** head, char* id);
Node* find_node_by_id(Node* head, char* id);
void update_node_by_id(Node* head, char* id, Student new_stu);
void display_all_nodes(Node* head);
void free_all_nodes(Node** head);
int count_nodes(Node* head);

// 业务逻辑函数
void calculate_average(Student* stu);
void sort_by_average(Node** head);
void sort_by_average_desc(Node** head);

#endif#pragma once
