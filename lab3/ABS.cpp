#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введите число Х = ";
	cin >> x;
	if (x < 0)
	{
		x = -x;
	}
	cout << "|X| = " << x << " - модуль числа Х" << endl;
	system("pause");
	return 0;
}