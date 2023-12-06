#include <stdio.h> 
#include <malloc.h>
int** chooseTest3() {
	int** matrix3 = (int*)malloc(1 * sizeof(int*));
	for (int i = 0; i < 1; i++) {
		matrix3[i] = (int*)malloc(1 * sizeof(int));
	}
	matrix3[0][0] = 123;

	return matrix3;
}