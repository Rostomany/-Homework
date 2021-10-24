#include "functions.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void TaskOne(double a, double x, double c)
{
	double L;

	L = (sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(1) * sqrt(abs(a + x * pow(c, 4))));

	printf("%f", L);
}


void TaskTwo(double time)
{
	float U;

	U = abs(3 * pow(time, 2) - (6 * time));

	printf("%f", U);

}

void  TaskThree(double a, double b, double c)
{
	double x1;
	double x2;
	double D;

	D = pow(b, 2) - (4 * a * c);

    if(D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);

		printf("%f , %f", x1, x2);
	}

	if(D == 0)
	{
		x1 = -b / (2 * a);

		printf("%f", x1);
	}

	else
		printf("NO");
}


void TaskFour(int CityСode, double Time)
{
	switch (CityСode)
	{
	case  48:
		printf("%f", 15 * Time);
		break;

	case  44:
		printf("%f", 18 * Time);
		break;

	case  46:
		printf("%f", 13 * Time);
		break;

	case  45:
		printf("%f", 11 * Time);
		break;

	default:
		printf("ERROR");
		break;
	}
}

void TaskFive()
{
// c - переменная в которую мы будем сохранять число Count
	int c;
	int sum;

	for(int Count = 1000; Count < 10000; ++Count)
	{
		c = Count;
		sum = 0;

		for(int i = 0; i < 4; ++i)
		{
			sum = sum + pow(c % 10, 4);
			c = c / 10;
		}

		if(sum == Count)
			printf("%d\n", sum);
	}
}

void TaskSix(int* arr , int ArrayLength)
{
	int s = ArrayLength - 1;
	int Count = 0;

	for (int i = 0; i <= ArrayLength - 1; ++i)
	{
		Count += arr[i] * pow(2, s);

		s = s - 1;
	}

	printf("%d", Count);
}

//Не бейте пж, я не понял как выводить двумерный массив ровно.
void TaskSeven(int i, int j)
{
	srand(time(NULL));

	int** L = (int**)malloc(i * sizeof(int*));

	for (int b = 0; b < i; b++)
	{
		L[b] = (int*)malloc(j * sizeof(int));
	}

	printf("Matrix before changes.\n");

	for (int length = 0; length < i; ++length)
	{
		printf("\n");

		for (int width = 0; width < j; ++width)
		{
			L[length][width] = (rand() % 10 + rand() % 2) * pow(-1, rand());

			printf("  %d", L[length][width]);
		}
	}

	printf("\nMatrix after changes.\n");

	for (int length = 0; length < i; ++length)
	{
		printf("\n");

		for (int width = 0; width < j; ++width)
		{
			L[length][width] = L[length][width] * -3;

			printf("  %d", L[length][width]);
		}

	}
}