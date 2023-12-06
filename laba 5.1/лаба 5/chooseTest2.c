#include <stdio.h>
#include <malloc.h>
int* chooseTest2(int* arrayLength) {
	int* array2 = (int*)malloc(2 * sizeof(int));
	array2[0] = 4;
	array2[1] = 13;     // [4, [26], 13, [8]]
	*arrayLength = 2;
	return array2;
}