#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, i = 1;
	double dob = 1;
	bool flag = false;
	cout << "Введите последовательность целых чисел. Ноль - признак конца." << endl;
	cout << "а[1] = ";
	cin >> a;
	if ( a!=0)
	{
		if (a % 2 == 0)
		{
			dob = dob * a;
			flag = true;
		}
	}
	else
	{
		cout << "Последовательности нет" << endl;
	}
	while (a != 0)
	{
		cout << "a[" << i + 1 << "] = ";
		cin >> a;
		if (a % 2 == 0 && a != 0 )
		{
			dob = dob * a;
			flag = true;
		}
		i++;
	}
	if (flag == true)
	{
		cout << "Произведение чётных чисел последовательности  = " << dob << endl;
	}
	else
		cout << "Чётных чисел нет в последовательности." << endl;
	system("pause");
	return 0;
}