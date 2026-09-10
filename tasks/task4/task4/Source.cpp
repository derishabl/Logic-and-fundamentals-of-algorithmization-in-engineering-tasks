#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int a[10][10], sum_column = 0, sum_string = 0, answer;
	for (inti = 0; i< 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = rand()%10;
		}
	}
	for (inti = 0; i< 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Какую сумму вы хотите найти? (1 - суммы строк, 2 - суммы столбцов): ");
	scanf_s("%d", &answer);
	if (answer == 1) {
		for (inti = 0; i< 10; i++) {
			for (int j = 0; j < 10; j++) {
				sum_string += a[i][j];
			}
			printf("Суммастроки %d: %d\n", i, sum_string);
			sum_string = 0;
		}
	}
	else {
		for (int j = 0; j < 10; j++) {
			for (inti = 0; i< 10; i++) {
				sum_column += a[i][j];
			}
			printf("Суммастолбца %d: %d\n", j, sum_column);
			sum_column = 0;
		}
	}
}
