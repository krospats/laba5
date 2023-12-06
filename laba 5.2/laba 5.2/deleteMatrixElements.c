#include <stdio.h> 
#include <malloc.h>
#include "moveRowElement.h"
void deleteMatrixElements(int** matrixOfNums, int rows, int* finalRowsLength) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < finalRowsLength[i]; j++) {
			for (int indexOfNextElements = j + 1; indexOfNextElements < finalRowsLength[i];) {
				if (matrixOfNums[i][j] == matrixOfNums[i][indexOfNextElements]) {
					moveRowElement(matrixOfNums, i, indexOfNextElements, finalRowsLength);
					matrixOfNums[i] = (void*)realloc(matrixOfNums[i], finalRowsLength[i] * sizeof(int));
				}
				else indexOfNextElements++;
			}
		}
	}
}