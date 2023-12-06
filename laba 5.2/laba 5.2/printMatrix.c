#include <stdio.h> 
void printMatrix(int** matrixOfNums, int rows, int** finalRowsLength) {
	printf("исходная матрица:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < (*finalRowsLength)[i]; j++) {
			printf("%d ", matrixOfNums[i][j]);
		}
		printf("\n");
	}
}