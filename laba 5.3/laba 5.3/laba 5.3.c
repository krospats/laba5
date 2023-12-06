#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
#include "chooseMatrix.h"
#include "printMatrix.h"
#include "printFinalMatrix.h"
#include "moveMatrixElements.h"
#include "deleteMatrix.h"
int main() {
	setlocale(LC_ALL, "Rus");
	int columns = 0;
	int rows = 0;
	int** matrixOfNums = chooseMatrix(&rows, &columns);
	printMatrix(matrixOfNums, rows, columns);
	moveMatrixElements(matrixOfNums, rows, columns);
	printFinalMatrix(matrixOfNums, rows, columns);
	deleteMatrix(matrixOfNums, rows);
	return 0;
}
