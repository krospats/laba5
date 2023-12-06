#include <stdio.h> 
#include <malloc.h>
int** chooseTest1() {
	int** matrix1 = (int**)malloc(4 * sizeof(int*));
	for (int i = 0; i < 4; i++) {
		matrix1[i] = (int*)malloc(6 * sizeof(int));
	}
	matrix1[0][0] = 1;
	matrix1[0][1] = 2;   //при k = 5:
	matrix1[0][2] = 1;   //[3 2 3 5 3]
	matrix1[0][3] = 3;   //[1 3 1 1 2]
	matrix1[0][4] = 1;   //[6 4 1 4 5]

	matrix1[1][0] = 4;
	matrix1[1][1] = 5;
	matrix1[1][2] = 6;
	matrix1[1][3] = 4;
	matrix1[1][4] = 1;

	matrix1[2][0] = 3;
	matrix1[2][1] = 3;
	matrix1[2][2] = 2;
	matrix1[2][3] = 3;
	matrix1[2][4] = 5;

	return matrix1;
}