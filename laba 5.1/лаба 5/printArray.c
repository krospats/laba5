#include <stdio.h>
void printArray(int* arrayOfNums, int arrayLength) {
	printf("�������� ������: ");
for (int i = 0; i < arrayLength; i++) {
	printf("%d ", arrayOfNums[i]);
}
printf("\n");
}