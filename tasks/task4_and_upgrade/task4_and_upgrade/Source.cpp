#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int sum = 0, size;
	int** table;
	printf("¬ведите размер квадратной матрицы:");
	scanf("%d", &size);
	table = (int**)calloc(size, sizeof(int*));

	for (int i = 0 ;i < size; i++) {
		table[i] = (int*)malloc(size * sizeof(int));
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			table[i][j] = rand() % 81 - 30;
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%5d ", table[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			sum += table[i][j];
		}
	}
	printf("—умма ниже главной диагонали: %d", sum);
	free(table);
}