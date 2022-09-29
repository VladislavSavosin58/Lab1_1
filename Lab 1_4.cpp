#include<iostream>
#include<ctime>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(void)
{
	int M, N;
	setlocale(0, "rus");
	srand(static_cast<int>(time(NULL)));
	printf("Введите число строк ");
	scanf_s("%d", &N);
	printf("Введите число столбцов ");
	scanf_s("%d", &M);
	int sum = 0;
	printf("Двухмерныймассив\n\n");
	int** a = (int**)malloc(N * sizeof(int*));
	for (int i = 0; i < N; i++)
	{
		a[i] = (int*)malloc(M * sizeof(int));
		for (int j = 0; j < M; j++)
		{
			a[i][j] = rand() % 99;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	for (int j = 0; j < M; j++)
	{
		sum = 0;
		for (int i = 0; i < N; i++)
		{
			sum += a[i][j];
		}
		//cout « "In " « j + 1 « " col sum is " « sum « endl;
		printf("\n");
		printf(" В %d столбце сумма = %d", j + 1, sum);
	}

	return 0;
}
