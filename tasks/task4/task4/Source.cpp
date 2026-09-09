#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int sum_column = 0, sum_string = 0, answer, size;
	int* rows;
	int* string;
	printf("Введите размер квадратной матрицы: %d");
	scanf("%d", &size);
	rows = (int*)calloc(size * sizeof(int));
	string = (int*)malloc(size * sizeof(int));
	
	for (; < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = rand()%50-29;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Какую сумму вы хотите найти? (1 - суммы строк, 2 - суммы столбцов): ");
	scanf_s("%d", &answer);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			sum_string += a[i][j+1];
		}
		printf("Сумма строки %d: %d\n", i, sum_string);
		sum_string = 0;
	}
}