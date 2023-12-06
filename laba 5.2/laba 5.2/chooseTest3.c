#include <stdio.h> 
#include <malloc.h>
int** chooseTest3(int* rows, int** finalRowsLength) {
	(*finalRowsLength) = (int*)malloc(1 * sizeof(int));
	(*finalRowsLength)[0] = 1;
	int** matrix3 = (int*)malloc(1 * sizeof(int*));
	for (int i = 0; i < 1; i++) {
		matrix3[i] = (int*)malloc((*finalRowsLength)[i] * sizeof(int*));
	}
	matrix3[0][0] = 123; // [123]
	*rows = 1;
	return matrix3;
}