#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, max, i = 1;
	bool flag = false;
	cout << "Введите последовательность целых чисел. Ноль - признак конца." << endl;
	cout << "а[1] = ";
	cin >> a;
	if (a != 0)
	{
		max = a;
		flag = true;
	}
	else
	{
		cout << "Последовательности нет" << endl;
	}
	while (a != 0)
	{
		cout << "a[" << i + 1 << "] = ";
		cin >> a;
		if (a > max)
		{
			max = a;
			flag = true;
		}
		i++;
	}
	if (flag == true)
	{
		cout << "Максимальное число последовательности  = " << max << endl;
	}
	system("pause");
	return 0;
}