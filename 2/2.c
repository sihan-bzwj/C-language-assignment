#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MOVIES 3

typedef struct Booking {
    int seatNumber;
    char customerName[50];
    float payment;
    struct Booking* next;
} Book;// Booking 结构体

typedef struct Movie {
    char name[100];
    int totalBookings;
    float totalIncome;
    Book* books;
} Movie;// Movie 结构体

void readBookings(char* filename, Movie movies[]) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("无法打开文件 %s\n", filename);
        exit(1);
    }
    char movieName[100];
    int seat;
    char customer[50];
    float pay;
    while (fscanf(file, "%s %d %s %f", movieName, &seat, customer, &pay) != EOF) {
        for (int i = 0; i < MAX_MOVIES; i++) {
            if (strcmp(movies[i].name, movieName) == 0) {
                // 创建新节点
                Book* newBook = (Book*)malloc(sizeof(Book));
                newBook->seatNumber = seat;
                strcpy(newBook->customerName, customer);
                newBook->payment = pay;
                newBook->next = movies[i].books;
                movies[i].books = newBook;

                // 更新统计信息
                movies[i].totalBookings++;
                movies[i].totalIncome += pay;
                break;
            }
        }
    }
    printf("读取文件成功\n");
    fclose(file);
}

void sortMoviesByIncome(Movie movies[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (movies[i].totalIncome < movies[j].totalIncome) {
                Movie temp = movies[i];
                movies[i] = movies[j];
                movies[j] = temp;
            }
        }
    }
    printf("按总收入排序成功\n");
}

void writeMoviesToFile(char* filename, Movie movies[], int size) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        printf("无法写入文件 %s\n", filename);
        return;
    }
    for (int i = 0; i < size; i++) {
        fprintf(file, "电影: %s, 总订票数: %d, 总收入: %.2f\n", movies[i].name, movies[i].totalBookings, movies[i].totalIncome);
        Book* current = movies[i].books;
        while (current != NULL) {
            fprintf(file, "座位: %d, 订票人: %s, 费用: %.2f\n", current->seatNumber, current->customerName, current->payment);
            current = current->next;
        }
        fprintf(file, "\n");
    }
    printf("写入文件成功\n");
    fclose(file);
}

int main() {
    Movie movies[MAX_MOVIES] = {
        {"好东西", 0, 0, NULL},
        {"雄狮少年", 0, 0, NULL},
        {"角斗士", 0, 0, NULL}
    };

    readBookings("bookings.txt", movies);
    sortMoviesByIncome(movies, MAX_MOVIES);
    writeMoviesToFile("movie_report.txt", movies, MAX_MOVIES);

    // 释放内存
    for (int i = 0; i < MAX_MOVIES; i++) {
        Book* current = movies[i].books;
        while (current != NULL) {
            Book* temp = current;
            current = current->next;
            free(temp);
        }
    }
    printf("内存释放成功\n");

    getchar();
    getchar();//清除缓冲区
    return 0;
}