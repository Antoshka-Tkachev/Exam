#include "pch.h"
#include "two_array.h"

two_array::two_array(int n, int m)
{
	stroka = n;
	stolbik = m;
	array = new int*[n];
	for (int i = 0; i < n; i++)
		array[i] = new int[m];

	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolbik; j++)
		{
			array[i][j] = rand() % 10;
		}
	}
}


void two_array::output()
{
	cout << "Двумерный массив:\n";
	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolbik; j++)
		{
			cout << array[i][j];
			cout << "\t";
		}
		cout << endl;
	}
}

void two_array::sum()
{
	int sum = 0;
	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolbik; j++)
		{
			if (array[i][j] % 2 == 1)
				sum = sum + array[i][j];
		}
	}
	cout << "\nСумма нечетных элеменотов в двумерном массиве: " << sum;
}