#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;
//Вариант5



int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, m, l;
	bool flag = false;
	cout << "Введите натуральное число N = " ;
	cin >> n;
	cout << "Введите натуральное число M = ";
	cin >> m;
	if (m <= n)
	{
		l = m;
		m = n;
		n = l;

		}
		for (int i = m; i < (m*n); i++)
		{
			if (i%n == 0 && i%m == 0)
			{
				cout << "НОК(" << m << ", " << n << ") (<m*n) = " << i << endl;
				flag = true;
			}
		}

		if (flag != true)
		{
			cout << "Числа взаимопростые." << endl;
		}
	system("pause");
	return 0;
}