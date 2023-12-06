#include <stdio.h> 
#include <malloc.h>
int** chooseUser(int* rows, int* columns) {
	int** matrix0;
	printf("\nвведите количество строчек в матрице(1 - 20) - ");
	while (scanf_s("%d", &*rows) == 0 || getchar() != '\n' || *rows > 20 || *rows < 1) {
		printf("некорректный ввод\n");
		rewind(stdin);
	}
	printf("\nвведите количество столбцов матрице(1 - 20) - ");
	while (scanf_s("%d", &*columns) == 0 || getchar() != '\n' || *columns > 20 || *columns < 1) {
		printf("некорректный ввод\n");
		rewind(stdin);
	}

	matrix0 = (int**)malloc(*rows * sizeof(int*));
	for (int i = 0; i < *rows; i++) {
		matrix0[i] = (int*)malloc(*columns * sizeof(int));
		for (int j = 0; j < *columns; j++) {
			printf("\nвведите элемент %d строчки %d столбца - ", i, j);
			while (scanf_s("%d", &matrix0[i][j]) == 0 || getchar() != '\n') {
				printf("некорректный ввод\n");
				rewind(stdin);
			}
		}

	}
	return matrix0;

}