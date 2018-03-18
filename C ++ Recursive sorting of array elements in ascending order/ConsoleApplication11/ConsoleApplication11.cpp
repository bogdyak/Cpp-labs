// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

const int n = 7;
int first, last;
//функци€ сортировки
void quicksort(int *mas, int first, int last)
{
	int mid, count;
	int f = first, l = last;
	mid = mas[(f + l) / 2]; //вычисление опорного элемента
	do
	{
		while (mas[f]<mid) f++;
		while (mas[l]>mid) l--;
		if (f <= l) //перестановка элементов
		{
			count = mas[f];
			mas[f] = mas[l];
			mas[l] = count;
			f++;
			l--;
		}
	}
	while (f<l);
	if (first<l) quicksort(mas, first, l);
	if (f<last) quicksort(mas, f, last);
}
//главна€ функци€
void main()
{
	setlocale(LC_ALL, "Rus");
	int *A = new int[n];//звездочка ставитс€ потому что выдел€ю пам€ть дл€ указател€, а массив это указатель
	srand(time(NULL));
	cout << "»сходный массив: ";
	for (int i = 0; i<n; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	first = 0; last = n - 1;
	quicksort(A, first, last);
	cout << endl << "–езультирующий массив: ";
	for (int i = 0; i<n; i++) cout << A[i] << " ";
	delete[]A;
	system("pause>>void");
}
