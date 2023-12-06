#include <stdio.h> 
void printFinalMatrix(int** matrixOfNums, int rows, int columns) {
	printf("полученная матрица:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d\t", matrixOfNums[i][j]);
		}
		printf("\n");
	}
}