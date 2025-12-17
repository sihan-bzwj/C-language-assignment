#define _CRT_SECURE_NO_WARNINGS//防止scanf警告
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMPUTERS 10

// 结构体声明
struct Computer {
	char computerName[20];
	double price;
};

struct ComputerList {
	char computerName[20];
	double price;
	struct ComputerList* nextAddr;
};

// 函数声明
void createComputerArray(char* filename, struct Computer computers[], int* count);
void sortByPrice(struct Computer computerArray[], int count);
struct ComputerList* creatLinkedList(struct Computer computerArray[], int count);
void display(struct ComputerList* first);




int main() {
	struct Computer computers[MAX_COMPUTERS];
	int computerCount = 0;

	FILE* file = fopen("computers.dat", "w");
	if (file == NULL) {
		printf("Error opening file");
		return 1;
	}

	fprintf(file, "Lenove 2500\n");
	fprintf(file, "IBM    4000\n");
	fprintf(file, "ASUS   2800\n");
	fprintf(file, "HP     3100\n");//写入文件

	fclose(file);//关闭文件
	printf("成功创建 computers.dat 文件\n");
	printf("=== 计算机信息管理系统 ===\n");

	createComputerArray("computers.dat", computers, &computerCount);
	if (computerCount == 0) {
		printf("错误：文件为空或读取失败\n");
		return 1;
	}
	printf("成功读取 %d 条计算机记录\n", computerCount);
    sortByPrice(computers, computerCount);

	struct ComputerList* head = creatLinkedList(computers, computerCount);//创建链表

	
	printf("\n价格大于3000的计算机信息（按价格降序排列）:\n");
	display(head);

	
	while (head != NULL) {
		struct ComputerList* temp = head;
		head = head->nextAddr;
		free(temp);//释放内存
	}

	getchar();//缓冲
	getchar();
	return 0;
}
// 函数实现：从文件创建计算机数组
void createComputerArray(char* filename, struct Computer computers[], int* count) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("错误：无法打开文件 %s\n", filename);
        printf("请确保已创建 computers.dat 文件，格式为：\n");
        printf("计算机名称 价格\n");
        printf("例如：\n");
        printf("Lenove 2500\n");
        printf("IBM 4000\n");
        printf("ASUS 2800\n");
        printf("HP 3100\n");
        return;
    }

    *count = 0;
    while (fscanf(file, "%s %lf", computers[*count].computerName, &computers[*count].price) == 2) {
        (*count)++;
        if (*count >= MAX_COMPUTERS) {
            printf("警告：已达到最大计算机数量限制\n");
            break;
        }
    }

    fclose(file);
}

// 函数实现：按价格降序排序
void sortByPrice(struct Computer computerArray[], int count) {
    int i, j;
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (computerArray[j].price < computerArray[j + 1].price) {
                // 交换两个计算机的信息
                struct Computer temp = computerArray[j];
                computerArray[j] = computerArray[j + 1];
                computerArray[j + 1] = temp;
            }
        }
    }
}

// 函数实现：从数组创建链表（只包含价格大于3000的计算机）
struct ComputerList* creatLinkedList(struct Computer computerArray[], int count) {
    struct ComputerList* head = NULL;
    struct ComputerList* tail = NULL;
    
    for (int i = 0; i < count; i++) {
        if (computerArray[i].price > 3000) {
            // 创建新节点
            struct ComputerList* newNode = (struct ComputerList*)malloc(sizeof(struct ComputerList));

            // 复制数据
            strcpy(newNode->computerName, computerArray[i].computerName);
            newNode->price = computerArray[i].price;
            newNode->nextAddr = NULL;

            // 添加到链表
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->nextAddr = newNode;
                tail = newNode;
            }
        }
    }

    return head;
}

// 函数实现：显示链表内容
void display(struct ComputerList* first) {
    struct ComputerList* current = first;
    int index = 1;

    if (current == NULL) {
        printf("链表为空，没有价格大于3000的计算机。\n");
        return;
    }

    while (current != NULL) {
        printf("%d. 名称: %s, 价格: %.2f元\n", index, current->computerName, current->price);
        current = current->nextAddr;
        index++;
    }
}