#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char question[256];

    if (fgets(question, sizeof(question), stdin) == NULL) {
        return 1;
    }

    if (strstr(question, "大一") != NULL &&
        strstr(question, "寒假") != NULL &&
        strstr(question, "计算机") != NULL) {
        printf("很值得！你可以从这几件事开始：\n");
        printf("1. 巩固C语言基础（指针、数组、结构体、文件操作）。\n");
        printf("2. 学习数据结构与算法基础，先做简单题。\n");
        printf("3. 用C语言做一个小项目（如学生管理系统、记账本）。\n");
        printf("4. 学习Git和GitHub，养成代码管理习惯。\n");
        printf("5. 保持英语阅读，尝试看英文技术资料。\n");
    } else {
        printf("建议你制定一个可执行的学习计划：基础 + 项目 + 复盘。\n");
    }

    return 0;
}
