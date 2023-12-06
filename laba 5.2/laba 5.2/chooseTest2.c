#include <stdio.h> 
#include <malloc.h>
int** chooseTest2(int* rows, int** finalRowsLength) {
	(*finalRowsLength) = (int*)malloc(2 * sizeof(int*));
	(*finalRowsLength)[0] = 4;
	(*finalRowsLength)[1] = 4;
	int** matrix2 = (int**)malloc(2 * sizeof(int*));
	for (int i = 0; i < 2; i++) {
		matrix2[i] = (int*)malloc((*finalRowsLength)[i] * sizeof(int));
	}
	matrix2[0][0] = 1;
	matrix2[0][1] = 0;     //[1 0 1 26]
	matrix2[0][2] = 1;     //[3]
	matrix2[0][3] = 26;

	matrix2[1][0] = 3;
	matrix2[1][1] = 3;
	matrix2[1][2] = 3;
	matrix2[1][3] = 3;
	*rows = 2;
	return matrix2;
}