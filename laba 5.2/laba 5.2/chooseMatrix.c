#include <stdio.h> 
#include <malloc.h>
#include "chooseUser.h"
#include "chooseTest1.h"
#include "chooseTest2.h"
#include "chooseTest3.h"
int** chooseMatrix(int* rows, int** finalRowsLength) {
	int chooseTest;
	int chooseMode;
	printf("��� ��������� ������� ������������� ����� ���, ����� � ����� ��������� ������� �� ��������� ��� ����������\n");
	printf("�������� ������ ���������� �������(1 - ����������������, 2 - ��������)\n");
	while (scanf_s("%d", &chooseMode) == 0 || getchar() != '\n' || chooseMode > 2 || chooseMode < 1) {
		printf("������������ ����\n");
		rewind(stdin);
	}
	if (chooseMode == 1) {
		int** matrix0 = chooseUser(&*rows, &*finalRowsLength);
		return matrix0;
	}
	else {
		printf("�������� ���� �� �������� ��������(1, 2, 3)\n");
		while (scanf_s("%d", &chooseTest) == 0 || getchar() != '\n' || chooseTest > 3 || chooseTest < 1) {
			printf("������������ ����\n");
			rewind(stdin);
		}
		if (chooseTest == 1) {
			int** matrix1 = chooseTest1(&*rows, &*finalRowsLength);
			return matrix1;
		}
		else if (chooseTest == 2) {
			int** matrix2 = chooseTest2(&*rows, &*finalRowsLength);
			return matrix2;
		}
		else if (chooseTest == 3) {
			int** matrix3 = chooseTest3(&*rows, &*finalRowsLength);
			return matrix3;
		}
	}
}
	