#include <stdio.h>
#include <malloc.h>
int* chooseTest3(int* arrayLength) {
	int* array3 = (int*)malloc(1 * sizeof(int));
	array3[0] = 123;    //[123]
	*arrayLength = 1;
	return array3;
}