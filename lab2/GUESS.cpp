#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, x1;
	cout << "Загадайте число!= " << endl;
	cin >> x;
	cout << "1) Умножьте Ваше число на 10, затем поделите на 2."<<endl; 
	cout << "2) К полученному результату добавьте задуманное число, сумму поделите на 3." << endl;
	cout << "3) Добавьте 4 к полученному результату и поделите на 2. После проделанных операций отнемите от всего 2." << endl;
	cout<<"Что же у Вас получилось? " << endl;
	x1 = (((x * 10) / 2 + x) / 3 + 4) / 2 - 2;
	cout << "Вы загадали число = " << x1 << endl;
	system("pause");
	return 0;

}
