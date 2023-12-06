#include <stdio.h>
void printArray(int* arrayOfNums, int arrayLength) {
	printf("исходный массив: ");
for (int i = 0; i < arrayLength; i++) {
	printf("%d ", arrayOfNums[i]);
}
printf("\n");
}