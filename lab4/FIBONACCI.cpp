#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;
int FIB(int i)
{
	int value = 0;
	if (i < 0)
		return 0;
	if (i == 1)
		return 1;
	return FIB(i - 1) + FIB(i - 2);
}
int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, f;
	cout << "Введите индекс элемента n = ";
	cin >> n;
	while (n < 0)
	{
		cout << "Введите неотрицательное целое число = ";
		cin >> n;
	}
	for (int i = 0; i <= n; i++)
	{
		f = FIB(i);
	}
	cout << "F[" << n << "] = " << f << endl;

	
	

	system("pause");
	return 0;
}