#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
#include "printArray.h"
#include "changeArray.h"
#include "chooseArray.h"
int main() {
	setlocale(LC_ALL, "Rus");
	int arrayLength = 0;
	int* arrayOfNums =  chooseArray(&arrayLength);
	printArray(arrayOfNums, arrayLength);
	changeArray(arrayOfNums, arrayLength);
	arrayOfNums = NULL;
	free(arrayOfNums);
	return 0;
}