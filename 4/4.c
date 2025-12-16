#define _CRT_SECURE_NO_WARNINGS // Disable security warnings for functions like scanf in MSVC
#include<stdio.h>

struct Student {
	int idnum;
	char name[20];
	int score;
};

void sortByScore(struct Student stu[], int n) {
	struct Student temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (stu[j].score > stu[j + 1].score) {
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}

void writeStudentsToFile(struct Student stu[], int n) {
	FILE* file = fopen("students.txt", "w");
	if (file == NULL) {
		printf("Error opening file!\n");
		return;
	}
	printf("The students data is being written to students.txt...\n");
	for (int i = 0; i < n; i++) {
		fprintf(file, "ID: %d, Name: %s, Score: %d\n", stu[i].idnum, stu[i].name, stu[i].score);
	}
	fclose(file);
}

void changeTheStudentScore(struct Student stu[], int n) {
	int id, newScore;
	printf("Enter student ID to change score: ");
	scanf("%d", &id);
	printf("Enter new score: ");
	scanf("%d", &newScore);
	for (int i = 0; i < n; i++) {
		if (stu[i].idnum == id) {
			stu[i].score = newScore;
			break;
		}
	}
}

void display() {
	FILE* file = fopen("students.txt", "r");
	if (file == NULL) {
		printf("Error opening file!\n");
		return;
	}

	printf("\nStudent Information from file:\n");
	printf("==============================\n");

	char line[100];
	while (fgets(line, sizeof(line), file)) {
		printf("%s", line);
	}

	fclose(file);
	printf("==============================\n");
}

int main() {
	struct Student stu[10];
	int i = 0;

	for (; i < 10; i++) {
		printf("Enter ID, Name, and Score for student %d: ", i + 1);
		if (!scanf(" %d %s %d", &stu[i].idnum, stu[i].name, &stu[i].score)) break;
	}

	sortByScore(stu, i);
	writeStudentsToFile(stu, i);
	changeTheStudentScore(stu, i);
	display();

	getchar();
	getchar();
	return 0;
}