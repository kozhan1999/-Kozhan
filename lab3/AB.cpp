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
	if (a > b)
	{
		c = a;
		a = b;
		b = c;
		cout << "Число А = "<< a <<endl;
		cout << "Число B = " << b << endl;
	}
	else
	{
		cout << "Число А = " << a << endl;
		cout << "Число B = " << b << endl;
	}
	system("pause");
	return 0;
}