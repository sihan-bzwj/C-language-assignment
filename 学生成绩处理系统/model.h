#ifndef MODEL_H
#define MODEL_H

#include "global.h"

// 学生信息结构体
typedef struct {
    char id[MAX_ID_LEN];      // 学号
    char name[MAX_NAME_LEN];  // 姓名
    float math;               // 数学成绩
    float english;            // 英语成绩
    float computer;           // 计算机成绩
    float average;            // 平均成绩
} Student;

// 链表节点结构体
typedef struct Node {
    Student data;
    struct Node* next;
} Node;

#endif#pragma once
