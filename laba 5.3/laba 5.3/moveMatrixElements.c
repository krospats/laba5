#include <stdio.h> 
void moveMatrixElements(int** matrixOfNums, int rows, int columns) {
	int amountOfMoves;
	int bufferVariable;
	printf("введите число, на которое переместится матрица - ");
	while (scanf_s("%d", &amountOfMoves) == 0 || getchar() != '\n' || amountOfMoves < 0) {
		printf("некорректный ввод\n");
		rewind(stdin);
	}
	for (int move = 0; move < amountOfMoves % (rows * columns); move++) {
		bufferVariable = matrixOfNums[0][0];
		for (int j = 0; j < columns; j++) {
			for (int i = 0; i < rows; i++) {
				if (i == 0 && j != 0) {
					matrixOfNums[rows - 1][j - 1] = matrixOfNums[i][j];
				}
				else if (i != 0) {
					matrixOfNums[i - 1][j] = matrixOfNums[i][j];
				}
			}
		}
		matrixOfNums[rows - 1][columns - 1] = bufferVariable;
	}
}