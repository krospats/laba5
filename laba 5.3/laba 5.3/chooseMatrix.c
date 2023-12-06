#include <stdio.h> 
#include <malloc.h>
#include "chooseTest1.h"
#include "chooseTest2.h"
#include "chooseTest3.h"
#include "chooseUser.h"
int** chooseMatrix(int* rows, int* columns) {
	int chooseTest;
	int chooseMode;
	printf("��� ��������� ���������� ����� ����� �� �������, � ���� ����� ������� �� ������ �������,\n �� ��� ������������ � ����� �������\n");
	printf("�������� ������ ���������� �������(1 - ����������������, 2 - ��������)\n");
	while (scanf_s("%d", &chooseMode) == 0 || getchar() != '\n' || chooseMode > 2 || chooseMode < 1) {
		printf("������������ ����\n");
		rewind(stdin);
	}
	if (chooseMode == 1) {
		int** matrix0 = chooseUser(&*rows, &*columns);
		return matrix0;
	}
	else {
		printf("�������� ���� �� �������� ��������(1, 2, 3)\n");
		while (scanf_s("%d", &chooseTest) == 0 || getchar() != '\n' || chooseTest > 3 || chooseTest < 1) {
			printf("������������ ����\n");
			rewind(stdin);
		}
		if (chooseTest == 1) {
			int** matrix1 = chooseTest1();
			*rows = 3;
			*columns = 5;
			return matrix1;
		}
		else if (chooseTest == 2) {
			int** matrix2 = chooseTest2();
			*rows = 2;
			*columns = 4;
			return matrix2;
		}
		else if (chooseTest == 3) {
			int** matrix3 = chooseTest3();
			*rows = 1;
			*columns = 1;
			return matrix3;
		}
	}
}