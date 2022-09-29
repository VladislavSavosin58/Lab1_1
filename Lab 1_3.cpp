#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
	int size = 0; // размер массива
	int i; // счетчик цикла

	/* просим пользователя указать размер массива */
	printf("Укажите размер массива:\n");
	while (size < 1)
	{
		scanf_s("%i", &size);
	}

	/* задаем массив нужного размера */
	int* a;
	a = (int*)malloc(size * sizeof(int));

	/* просим ввести элементы массива */
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 99;
		printf("%d ", a[i]);
	}

	return 0;
}
