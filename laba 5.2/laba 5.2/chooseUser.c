#include <stdio.h> 
#include <malloc.h>
int** chooseUser(int* rows, int** finalRowsLength) {
	int** matrix0;
	printf("\n������� ���������� ������� � �������(1 - 20) - ");
	while (scanf_s("%d", &*rows) == 0 || getchar() != '\n' || *rows > 20 || *rows < 1) {
		printf("������������ ����\n");
		rewind(stdin);
	}
	(*finalRowsLength) = (int*)malloc(*rows * sizeof(int*));
	matrix0 = (int**)malloc(*rows * sizeof(int*));
	for (int i = 0; i < *rows; i++) {
		printf("\n������� ����� %d ������� � �������(1 - 20) - ", i);
		while (scanf_s("%d", &(*finalRowsLength)[i]) == 0 || getchar() != '\n' || (*finalRowsLength)[i] > 20 || (*finalRowsLength)[i] < 1) {
			printf("������������ ����\n");
			rewind(stdin);
		}

		matrix0[i] = (int*)malloc((*finalRowsLength)[i] * sizeof(int));
		for (int j = 0; j < (*finalRowsLength)[i]; j++) {
			printf("\n������� ������� %d ������� %d ������� - ", i, j);
			while (scanf_s("%d", &matrix0[i][j]) == 0 || getchar() != '\n') {
				printf("������������ ����\n");
				rewind(stdin);
			}
		}

	}
	return matrix0;

}