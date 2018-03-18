// ConsoleApplication51.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	char stroka[100], glasn[100], sogl[100];
	int i, c, m, p;
	i = c = m = 0;
	printf("\t ¬ведите текст \n");
	gets_s(stroka);
	p = strlen(stroka);
	memcpy(glasn, "", 100);
	memcpy(sogl, "", 100);
	for (i = 0; i <= p; i++)
	{
		if (isalpha(stroka[i]))
		{
			if (stroka[i] == 'a' || stroka[i] == 'y'
				|| stroka[i] == 'e' || stroka[i] == 'o'
				|| stroka[i] == 'i' || stroka[i] == 'u')
			{
				glasn[c] = stroka[i];
				++c;
			}
			else
			{
				sogl[m] = stroka[i];
				++m;
			}
		}
		sogl[m] = '\0';
		glasn[c] = '\0';
	}
	cout << glasn << endl << sogl << endl;
	
	cin.get();
}
