#include <stdio.h>
#include <malloc.h>
int* chooseTest1(int* arrayLength) {
	int* array1 = (int*)malloc(4 * sizeof(int));
	array1[0] = 1;
	array1[1] = 2;
	array1[2] = 3;     //[1, [6], 2, [4], 3, [6], 4[4] ]
	array1[3] = 4;
	*arrayLength = 4;
	return array1;
}