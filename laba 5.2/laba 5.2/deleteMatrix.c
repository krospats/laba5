#include <malloc.h>
void deleteMatrix(int** matrixOfNums, int rows) {
	for (int i = 0; i < rows; i++) {
		matrixOfNums[i] = NULL;
		free(matrixOfNums[i]);
	}
	matrixOfNums = NULL;
	free(matrixOfNums);
}