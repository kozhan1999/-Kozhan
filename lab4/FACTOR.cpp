#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, n0 ;
	float N;
	cout << "Введите число = ";
	while (cin) {
		cin >> N;
		if (cin.good() == 1)
		{
		 if (N <= 0)
		{
			cout << "Введите натуральное число" << endl;
		}
		else if (N != int(N))
			cout << "Введите натуральное число" << endl;
		else
		{
			n = (int)N;
			n0 = n;
			for (int i = n - 1; i > 0; i--)
			{

				n = n * i;
			}
			cout << n0 << "! = " << n << endl;
			break;
		}
		}
		else 
			cout << "Введите натуральное число" << endl;
	}
	
	system("pause");
	return 0;
}