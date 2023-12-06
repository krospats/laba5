void moveRowElement(int** matrixOfNums, int i, int indexOfNextElements, int* finalRowsLength) {
	for (int k = indexOfNextElements + 1; k < finalRowsLength[i]; k++) {
		matrixOfNums[i][k - 1] = matrixOfNums[i][k];
	}
	finalRowsLength[i]--;
}