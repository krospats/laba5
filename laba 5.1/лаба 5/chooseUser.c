#include <stdio.h>
#include <malloc.h>
int* chooseUser(int* arrayLength) {
	printf("������� ����� �������(1 - 20) - ");
	while (scanf_s("%d", &*arrayLength) == 0 || getchar() != '\n' || *arrayLength > 20 || *arrayLength < 1) {
		printf("������������ ����\n");
		rewind(stdin);
	}
	int* array0 = (int*)malloc((*arrayLength) * sizeof(int));
	for (int i = 0; i < *arrayLength; i++) {
		printf("\n%d ������� ������� - ", i);
		while (scanf_s("%d", &array0[i]) == 0 || getchar() != '\n') {
			printf("������������ ����\n");
			rewind(stdin);
		}
	}
	return array0;
}