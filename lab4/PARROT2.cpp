#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char str[35];
	cout << "Введите строку из какого-то текста: " << endl;
	cin.getline(str, 34);
	cout <<  str <<  endl;
	while (strlen(str)!=0)
	{
		cout << "Введите строку из какого-то текста: " << endl;
		cin.getline(str, 34);
		cout  << str <<  endl;
	}
	system("pause");
	return 0;

}