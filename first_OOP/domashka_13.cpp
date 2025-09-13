#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	//1. В одномерном массиве, заполненном случайными числами,
	//	определить минимальный и максимальный элементы.
	//int arr[10];
	//int min = 100;
	//int max = 0;
	//for (size_t i = 0; i < 10; i++)
	//{
	//	arr[i] = rand() % 100 + 1;
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//	if (min > arr[i])
	//	{
	//		min = arr[i];
	//	}
	//}
	//cout << "Max number is: " << max << endl;
	//cout << "Min number is: " << min << endl;

	//2. В одномерном массиве, заполненном случайными числами
	//	в заданном пользователем диапазоне, найти сумму элементов,
	//	значения которых меньше указанного пользователем.


//	const int size = 10;
//	int arr[size];
//
//	int min, max;
//	cout << "Enter min: " << endl;
//	cin >> min;
//	cout << "Enter max: " << endl;
//	cin >> max;
//
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = rand() % (max - min) + min;
//	}
//
//	cout << "All the numbers: " << endl;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << ", " << endl;
//	}
//
//	int limit;
//	cout << "Enter a limit: " << endl;
//	cin >> limit;
//
//	int sum = 0;
//
//	cout << "Limit numbers: " << endl;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (arr[i] <= limit)
//		{
//			cout << arr[i] << ", " << endl;
//			sum += arr[i];
//		}
//	}
//	cout << "Sum of numbers with limit: " << sum << endl;


		//3. Пользователь вводит прибыль фирмы за год(12 месяцев).
	//	Затем пользователь вводит диапазон(например, 3 и 6 — поиск
	//	между 3 - м и 6 - м месяцем).Необходимо определить месяц,
	//	в котором прибыль была максимальна и месяц, в котором
	//	прибыль была минимальна с учетом выбранного диапазона

	//const int size = 12;
	//int arr[12];

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << "Введите прибыль за " << i+1 << " месяц: " << endl;
	//	cin >> arr[i];
	//}

	//cout << "So, the answer is: " << endl;
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << ", ";
	//}
	//cout << endl;

	//int min, max;

	//cout << "Enter min: " << endl;
	//cin >> min;
	//cout << "Enter max: " << endl;
	//cin >> max;


	//int min_money = 0;
	//int max_money = 10000;
	//cout << "So, we got: " << endl;
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i] >= min && arr[i] <= max)
	//	{
	//		cout << arr[i] << ", " << endl;
	//		if (arr[i] > min_money)
	//		{
	//			min_money = arr[i];
	//		}
	//		if (arr[i] < max_money)
	//		{
	//			max_money = arr[i];
	//		}
	//	}
	//}

	//cout << "Max money from this period: " << max_money << endl;
	//cout << "Min money from this period: " << min_money << endl;
	

//4. В одномерном массиве, состоящем из N вещественных
//чисел вычислить :
//■ Сумму отрицательных элементов.
//■ Произведение элементов, находящихся между min и max
//элементами.
//■ Произведение элементов с четными номерами.
//■ Сумму элементов, находящихся между первым и последним отрицательными элементами.

	/*int size;
	cout << "Enter a size: " << endl;
	cin >> size;

	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter a number for " << i << " place: ";
		cin >> arr[i];
	}

	cout << endl;
	cout << "So, we got: " << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	int sum_of_negative = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			sum_of_negative += arr[i];
		}
	}
	cout << "The sum of negative numbers: " << sum_of_negative << endl;


	int min_number = -10000;
	int max_number = 10000;
	int sum_of_numbers;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > min_number)
		{
			min_number = arr[i];
		}
		if (arr[i] < max_number)
		{
			max_number = arr[i];
		}
	}
	sum_of_numbers = min_number + max_number;
	cout << "Min number of arr is: " << min_number << endl;
	cout << "Max number of arr is: " << max_number << endl;
	cout << "The difference is: " << sum_of_numbers << endl;
	cout << endl;

	int sum_number = 1;
	for (size_t i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			sum_number *= arr[i];
		}
	}
	cout << "Your answer is: " << sum_number << endl;

	delete[] arr;*/

}


