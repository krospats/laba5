#include <stdio.h> 
void printFinalMatrix(int** matrixOfNums, int rows, int* finalRowsLength) {
	printf("полученная матрица:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < finalRowsLength[i]; j++) {
			printf("%d ", matrixOfNums[i][j]);
		}
		printf("\n");
	}
}