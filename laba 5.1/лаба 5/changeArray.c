#include <stdio.h>
#include "printFinalArray.h"
#include <malloc.h>
void changeArray(int* arrayOfNums, int arrayLength) {
	if (arrayLength == 1) {
		printf("%d", arrayOfNums[0]);
	}
	else {
		arrayLength *= 2;
		arrayOfNums = (void*)realloc(arrayOfNums, arrayLength * sizeof(int));
		for (int i = arrayLength / 2 - 1; i >= 0; i--) {
			arrayOfNums[2 * i] = arrayOfNums[i];
		}
		arrayOfNums[arrayLength - 1] = arrayOfNums[arrayLength - 4] + arrayOfNums[0]; //присваиваю значение последнему добавляемому элементу 
		for (int i = arrayLength - 3; i > 1; i -= 2) {
			arrayOfNums[i] = arrayOfNums[i + 1] + arrayOfNums[i - 3];
		}

		arrayOfNums[1] = arrayOfNums[2] + arrayOfNums[arrayLength - 2]; //присваиваю значение первому добавляемому элементу
		printFinalArray(arrayOfNums, arrayLength);
	}
}