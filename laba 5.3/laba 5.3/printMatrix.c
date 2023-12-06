#include <stdio.h> 
void printMatrix(int** matrixOfNums, int rows, int columns) {
	printf("исходная матрица:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d\t", matrixOfNums[i][j]);
		}
		printf("\n");
	}
}