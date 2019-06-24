#include "pch.h"
#include "one_array.h"

one_array::one_array(int k)
{
	N = k;
	array = new int[N];
}

void one_array::set_info()
{
	for (int i = 0; i < N; i++)
	{
		cout << "Введите "<< i + 1 << " элемент массива: ";
		cin >> array[i];
	}
}

void one_array::output()
{
	cout << "Одномерный массив: ";
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << "\t";
	}
}

void one_array::sum()
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (array[i] % 2 == 1)
			sum = sum + array[i];
	}
	cout << "\nСумма нечетных элеменотов в одномерном массиве: " << sum;
}