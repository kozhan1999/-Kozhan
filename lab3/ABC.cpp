#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "Введите целое число А = ";
	cin >> a;
	cout << "Введите целое число B = ";
	cin >> b;
	cout << "Введите целое число C = ";
	cin >> c;
	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	if (b > c)
	{
		b = b + c;
		c = b - c;
		b = b - c;
	}
	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
		cout << "Число А = " << a << endl;
		cout << "Число B = " << b << endl;
		cout << "Число C = " << c << endl;
	
	system("pause");
	return 0;
}