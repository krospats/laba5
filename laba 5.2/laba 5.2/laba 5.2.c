#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
#include "chooseMatrix.h"
#include "printMatrix.h"
#include "deleteMatrixElements.h"
#include "printFinalMatrix.h"
#include "deleteMatrix.h"
int main() {
	setlocale(LC_ALL, "Rus");
	int rows = 0;
	int* finalRowsLength = NULL;

	int** matrixOfNums = chooseMatrix(&rows, &finalRowsLength);
	printMatrix(matrixOfNums, rows, &finalRowsLength);
	deleteMatrixElements(matrixOfNums, rows, finalRowsLength);
	printFinalMatrix(matrixOfNums, rows, finalRowsLength);
	deleteMatrix(matrixOfNums, rows);
	finalRowsLength = NULL;
	free(finalRowsLength);
	return 0;
}
