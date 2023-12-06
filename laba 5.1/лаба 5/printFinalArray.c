#include <stdio.h>
void printFinalArray(int* arrayOfNums, int arrayLength) {
	printf("полученный массив: ");
	for (int i = 0; i < arrayLength; i++) {
		if (i % 2 != 0) printf("[%d] ", arrayOfNums[i]);
		else printf("%d ", arrayOfNums[i]);
	}
	printf("\n");
}