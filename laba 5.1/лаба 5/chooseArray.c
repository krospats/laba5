#include <stdio.h>
#include <malloc.h>
#include "chooseTest1.h"
#include "chooseTest2.h"
#include "chooseTest3.h"
#include "chooseUser.h"
int* chooseArray(int* arrayLength) {
	int chooseMode;
	int chooseTest;
	printf("��� ��������� ������� ������� ������� �������� ������� � �������� ��� ������ �� ��������� �����(����������)\n");
	printf("�������� ���� ������(1 - ����������������, 2 - ��������)\n");
	while (scanf_s("%d", &chooseMode) == 0 || getchar() != '\n' || chooseMode > 2 || chooseMode < 1) {
		printf("������������ ����\n");
		rewind(stdin);
	}
	if (chooseMode == 1) {
		int* array0 = chooseUser(&*arrayLength);
		return array0;
	}
	else {
		printf("�������� ���� �� �������� ��������(1, 2, 3)\n");
		while (scanf_s("%d", &chooseTest) == 0 || getchar() != '\n' || chooseTest > 3 || chooseTest < 1) {
			printf("������������ ����\n");
			rewind(stdin);
		}
		if (chooseTest == 1) {
			int* array1 = chooseTest1(&*arrayLength);
			return array1;
		}
		else if (chooseTest == 2) {
			int* array2 = chooseTest2(&*arrayLength);
			return array2;
		}
		else if (chooseTest == 3) {
			int* array3 = chooseTest3(&*arrayLength);
			return array3;
		}
	}
}