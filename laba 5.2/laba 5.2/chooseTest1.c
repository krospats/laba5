#include <stdio.h> 
#include <malloc.h>
int** chooseTest1(int* rows, int** finalRowsLength) {
	(*finalRowsLength) = (int*)malloc(4 * sizeof(int*));
	(*finalRowsLength)[0] = 5;
	(*finalRowsLength)[1] = 2;
	(*finalRowsLength)[2] = 5;
	(*finalRowsLength)[3] = 6;
	int** matrix1 = (int**)malloc(4 * sizeof(int*));
	for (int i = 0; i < 4; i++) {
		matrix1[i] = (int*)malloc((*finalRowsLength)[i] * sizeof(int));
	}
	matrix1[0][0] = 1;
	matrix1[0][1] = 2;      //[1 2 3]
	matrix1[0][2] = 1;      //[4 8]
	matrix1[0][3] = 3;      //[3 2 5 0]
	matrix1[0][4] = 1;      //[11 8 7 1 13 -5]

	matrix1[1][0] = 4;
	matrix1[1][1] = 8;

	matrix1[2][0] = 3;
	matrix1[2][1] = 2;
	matrix1[2][2] = 3;
	matrix1[2][3] = 5;
	matrix1[2][4] = 0;

	matrix1[3][0] = 11;
	matrix1[3][1] = 8;
	matrix1[3][2] = 7;
	matrix1[3][3] = 1;
	matrix1[3][4] = 13;
	matrix1[3][5] = -5;

	*rows = 4;
	return matrix1;
}