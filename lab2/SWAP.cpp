#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, l;
	cout << "Введите A = ";
	cin >> a;
	cout << "Введите B = ";
	cin >> b;
	l = b;
	b = a;
	a = l;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	system("pause");
	return 0;

}