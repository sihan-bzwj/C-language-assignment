#ifndef STU_FILE_H
#define STU_FILE_H

#include "model.h"

// 文件操作函数
int save_to_file(Node* head, const char* filename);
Node* load_from_file(const char* filename);
void display_from_file(const char* filename);

#endif#pragma once
