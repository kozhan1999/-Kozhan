#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, sum=0, i = 1;
	bool flag = false;
	cout << "Введите последовательность целых чисел. Ноль - признак конца." << endl;
	cout << "а[1] = ";
	cin >> a;
	if (a == 0)
	{
		cout << "Последовательности нет" << endl;
		
	}
	else
	{
		flag = true;
		sum += a;
	}
	while (a != 0)
	{
		cout << "a[" << i + 1 << "] = ";
		cin >> a;
		sum += a;
		i++;
	}
	if (flag == true)
	{
		cout << "Sum  = " << sum << endl;
	}
	system("pause");
	return 0;
}