#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, k=0;
	cout << "Введите число = ";
	cin >> a;
	if (a % 2 != 0)
	{
		k++;
	}
	while (a != 0)
	{
		cout << "Введите число = ";
		cin >> a;
		if (a % 2 != 0)
		{
			k++;
		}
	}
	if (k == 0)
	{
		cout << "Нечётных чисел нет в последовательности." << endl;
	}
	else
		cout << "Количество нечётных чисел = " <<k<< endl;
	system("pause");
	return 0;
}