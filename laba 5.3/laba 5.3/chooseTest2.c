#include <stdio.h> 
#include <malloc.h>
int** chooseTest2() {
	int** matrix2 = (int**)malloc(2 * sizeof(int*));
	for (int i = 0; i < 2; i++) {
		matrix2[i] = (int*)malloc(4 * sizeof(int));
	}
	matrix2[0][0] = 1;
	matrix2[0][1] = 0;
	matrix2[0][2] = 1;
	matrix2[0][3] = 26;

	matrix2[1][0] = 3;
	matrix2[1][1] = 3;
	matrix2[1][2] = 3;
	matrix2[1][3] = 3;

	return matrix2;
}