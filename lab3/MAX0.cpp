#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "Введите целое число А = ";
	cin >> a;
	cout << "Введите целое число B = ";
	cin >> b;
	cout << "A = " << a << ", B = " << b << endl;
	if (a < b)
	{
		cout << "Max(" << a << ", " << b << ") = " << b << endl;
	}
	else if (a>b)
		cout << "Max(" << a << ", " << b << ") = " << a << endl;
	else
		cout << "Числа равны." << endl;
	system("pause");
	return 0;
}