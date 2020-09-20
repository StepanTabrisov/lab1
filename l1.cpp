#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void z1() {
	int max, min;
	int mass[10];
	int sum = 0;
	printf("Введите значения массива через пробел\n");

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &mass[i]);				// Считываем данные
	}
	system("cls");

	printf("Полученный массив\n");

	for (int i = 0; i < 10; i++) {				// Печать массива

		printf("%d   ", mass[i]);
	}
	max = mass[0];								// Переменной max присваиваем 1 элемент массива
	for (int i = 0; i < 10; i++) {
		if (mass[i] > max) {						// Находим максимальный элемент, сравнивая каждое значение (Если элемент массива больше переменной max, то присваиваем этот элемент max)
			max = mass[i];
		}
	}
	min = mass[0];								// Переменной min присваиваем 1 элемент массива
	for (int i = 0; i < 10; i++) {
		if (min > mass[i]) {			// Находим минимальный элемент, сравнивая каждое значение (Если min больше элемента массива, то присваиваем этот элемент min)
			min = mass[i];
		}
	}
	printf("\n\n\n\n");
	sum = max - min;						// разность двух элементов
	printf("Результат вычитания (Max-Min) %d\n", sum);		// вывод результата
}


void z2() {
	int max, min;
	int mass[10];
	int sum = 0;


	for (int i = 0; i < 10; i++) {        // Заполнение массива случайными числами в диапазоне от -50 до 50
		mass[i] = rand() % 101 - 50;
	}
	system("cls");

	printf("Массив заполнен случайными числами\n");

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
	printf("Результат вычитания (Max-Min) %d\n", sum);
	printf("\n\n\n\n");
}
void z3() {
	int n, * mass;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	mass = (int*)malloc(n * sizeof(int)); // создание динамического массива
	for (int i = 0; i < n; i++) {        // Заполнение массива случайными числами в диапазоне от -50 до 50
		mass[i] = rand() % 101 - 50;
	}



	printf("Массив размером %d заполнен случайными числами\n", n);

	for (int i = 0; i < n; i++) {

		printf("%d   ", mass[i]);
	}
	printf("\n\n\n\n");
}

void z4() {
	int n, k;

	int** mass;
	int sum = 0;
	printf("Введите значение n\n");
	scanf_s("%d", &n);
	printf("Введите значение k\n");
	scanf_s("%d", &k);

	mass = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) {
		mass[i] = (int*)malloc(k * sizeof(int));
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++) {										// Заполнение массива случайными числами в диапазоне от -50 до 50
			mass[i][j] = rand() % 101;

		}


	printf("Двумерный массив 5x5 заполнен случайными числами\n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			printf("%d   ", mass[i][j]);

		}
		printf("\n");
	}

	printf("Сумма элементов в строке\n");
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
		printf("Введите фамилию студента\n");
		scanf_s("%20s", stud[i].famil);
	}

	for (i = 0; i < 3; i++) {
		printf("Введите имя студента %s\n", stud[i].famil);
		scanf_s("%20s", stud[i].name);
	}

	for (i = 0; i < 3; i++) {
		printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name);
		scanf_s("%20s", stud[i].facult);
	}


	for (i = 0; i < 3; i++) {
		printf("Введите номер зачетной книжки студента %s %s\n", stud[i].famil, stud[i].name);
		scanf_s("%20s", &stud[i].zach);
	}

	for (i = 0; i < 3; i++) {
		printf("Студент %s %s Факультет %s Номер зачетной книжки %s \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].zach);

	}



	char nam[20];
	printf("Введите фамилию студента/номер зачетной книжки/имя: ");
	fflush(stdin);
	scanf_s("%s", nam, 20);


	for (i = 0; i < 3; i++) {
		if (((strcmp(nam, stud[i].famil) == 0) || (strcmp(nam, stud[i].name) == 0) || (strcmp(nam, stud[i].facult) == 0)) || (strcmp(nam, stud[i].zach) == 0))
		{
			printf("Студент %s %s Факультет %s Номер зачетной книжки %s \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].zach);
			u++;
		}

	}

	if (u == 0) {
		printf("Студент не найден \n");
	}
	printf("\n\n\n\n");
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int v;
	printf("Выберите номер задания. Для выхода из режима просмотра заданий введите - 0\n");
	scanf_s("%d", &v);
	if (v > 5) {
		printf("Неккоректный ввод!");
		exit(0);
	}
	while (v) {
		switch (v) {
		case 1:
			z1();
			printf("Выберите номер задания. Для выхода из режима просмотра заданий введите - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("Неккоректный ввод!");
				exit(0);
			}
			break;

		case 2:
			z2();
			printf("Выберите номер задания. Для выхода из режима просмотра заданий введите - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("Неккоректный ввод!");
				exit(0);
			}
			break;

		case 3:
			z3();
			printf("Выберите номер задания. Для выхода из режима просмотра заданий введите - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("Неккоректный ввод!");
				exit(0);
			}
			break;

		case 4:
			z4();
			printf("Выберите номер задания. Для выхода из режима просмотра заданий введите - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("Неккоректный ввод!");
				exit(0);
			}
			break;

		case 5:
			z5();
			printf("Выберите номер задания. Для выхода из режима просмотра заданий введите - 0\n");
			scanf_s("%d", &v);
			system("cls");
			if (v > 5) {
				printf("Неккоректный ввод!");
				exit(0);
			}
			break;


		}
	}(v == 0);


}