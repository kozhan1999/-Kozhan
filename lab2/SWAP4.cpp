#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c, d, l;
	cout << "Введите A = ";
	cin >> a;
	cout << "Введите B = ";
	cin >> b;
	cout << "Введите C = ";
	cin >> c;
	cout << "Введите D = ";
	cin >> d;
	l = d;
	d = c;
	c = b;
	b = a;
	a = l;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;
	cout << "D = " << d << endl;
	system("pause");
	return 0;

}