#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void z1() {
	int max, min;
	int mass[10];
	int sum = 0;
	printf("������� �������� ������� ����� ������\n");

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &mass[i]);				// ��������� ������
	}
	system("cls");

	printf("���������� ������\n");

	for (int i = 0; i < 10; i++) {				// ������ �������

		printf("%d   ", mass[i]);
	}
	max = mass[0];								// ���������� max ����������� 1 ������� �������
	for (int i = 0; i < 10; i++) {
		if (mass[i] > max) {						// ������� ������������ �������, ��������� ������ �������� (���� ������� ������� ������ ���������� max, �� ����������� ���� ������� max)
			max = mass[i];
		}
	}
	min = mass[0];								// ���������� min ����������� 1 ������� �������
	for (int i = 0; i < 10; i++) {
		if (min > mass[i]) {			// ������� ����������� �������, ��������� ������ �������� (���� min ������ �������� �������, �� ����������� ���� ������� min)
			min = mass[i];
		}
	}
	printf("\n\n\n\n");
	sum = max - min;						// �������� ���� ���������
	printf("��������� ��������� (Max-Min) %d\n", sum);		// ����� ����������
}


void z2() {
	int max, min;
	int mass[10];
	int sum = 0;


	for (int i = 0; i < 10; i++) {        // ���������� ������� ���������� ������� � ��������� �� -50 �� 50
		mass[i] = rand() % 101 - 50;
	}
	system("cls");

	printf("������ �������� ���������� �������\n");

	for (int i = 0; i < 10; i++) {

		printf("%d   ", mass[i]);
	}
	max = mass[0];
	for (int i = 0; i < 10; i++) {
		if (mass[i] > max) {
			max = mass[i];
		}
	}
	min = mass[0];
	for (int i = 0; i < 10; i++) {
		if (min > mass[i]) {
			min = mass[i];
		}
	}
	printf("\n\n\n\n");
	sum = max - min;
	printf("��������� ��������� (Max-Min) %d\n", sum);
	printf("\n\n\n\n");
}
void z3() {
	int n, * mass;
	printf("������� ������ �������: ");
	scanf_s("%d", &n);
	mass = (int*)malloc(n * sizeof(int)); // �������� ������������� �������
	for (int i = 0; i < n; i++) {        // ���������� ������� ���������� ������� � ��������� �� -50 �� 50
		mass[i] = rand() % 101 - 50;
	}



	printf("������ �������� %d �������� ���������� �������\n", n);

	for (int i = 0; i < n; i++) {

		printf("%d   ", mass[i]);
	}
	printf("\n\n\n\n");
}

void z4() {
	int n, k;

	int** mass;
	int sum = 0;
	printf("������� �������� n\n");
	scanf_s("%d", &n);
	printf("������� �������� k\n");
	scanf_s("%d", &k);

	mass = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) {
		mass[i] = (int*)malloc(k * sizeof(int));
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++) {										// ���������� ������� ���������� ������� � ��������� �� -50 �� 50
			mass[i][j] = rand() % 101;

		}


	printf("��������� ������ 5x5 �������� ���������� �������\n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			printf("%d   ", mass[i][j]);

		}
		printf("\n");
	}

	printf("����� ��������� � ������\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {

			sum += mass[i][j];
			if (j == (k - 1)) {
				printf("%d   ", sum);
				sum = 0;
			}
		}
	}
	printf("\n\n\n\n");
}
void z5() {
	int i;
	int u = 0;
	struct student {

		char famil[20];
		char name[20];
		char facult[20];
		char zach[200];
	}stud[3];


	for (i = 0; i < 3; i++) {
		printf("������� ������� ��������\n");
		scanf_s("%20s", stud[i].famil);
	}

	for (i = 0; i < 3; i++) {
		printf("������� ��� �������� %s\n", stud[i].famil);
		scanf_s("%20s", stud[i].name);
	}

	for (i = 0; i < 3; i++) {
		printf("������� �������� ���������� �������� %s %s\n", stud[i].famil, stud[i].name);
		scanf_s("%20s", stud[i].facult);
	}


	for (i = 0; i < 3; i++) {
		printf("������� ����� �������� ������ �������� %s %s\n", stud[i].famil, stud[i].name);
		scanf_s("%20s", &stud[i].zach);
	}

	for (i = 0; i < 3; i++) {
		printf("������� %s %s ��������� %s ����� �������� ������ %s \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].zach);

	}



	char nam[20];
	printf("������� ������� ��������/����� �������� ������/���: ");
	fflush(stdin);
	scanf_s("%s", nam, 20);


	for (i = 0; i < 3; i++) {
		if (((strcmp(nam, stud[i].famil) == 0) || (strcmp(nam, stud[i].name) == 0) || (strcmp(nam, stud[i].facult) == 0)) || (strcmp(nam, stud[i].zach) == 0))
		{
			printf("������� %s %s ��������� %s ����� �������� ������ %s \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].zach);
			u++;
		}

	}

	if (u == 0) {
		printf("������� �� ������ \n");
	}
	printf("\n\n\n\n");
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int v;
	printf("�������� ����� �������. ��� ������ �� ������ ��������� ������� ������� - 0\n");
	scanf_s("%d", &v);
	if (v > 5) {
		printf("������������ ����!");
		exit(0);
	}
	while (v) {
		switch (v) {
		case 1:
			z1();
			printf("�������� ����� �������. ��� ������ �� ������ ��������� ������� ������� - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("������������ ����!");
				exit(0);
			}
			break;

		case 2:
			z2();
			printf("�������� ����� �������. ��� ������ �� ������ ��������� ������� ������� - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("������������ ����!");
				exit(0);
			}
			break;

		case 3:
			z3();
			printf("�������� ����� �������. ��� ������ �� ������ ��������� ������� ������� - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("������������ ����!");
				exit(0);
			}
			break;

		case 4:
			z4();
			printf("�������� ����� �������. ��� ������ �� ������ ��������� ������� ������� - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("������������ ����!");
				exit(0);
			}
			break;

		case 5:
			z5();
			printf("�������� ����� �������. ��� ������ �� ������ ��������� ������� ������� - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("������������ ����!");
				exit(0);
			}
			break;


		}
	}(v == 0);


}