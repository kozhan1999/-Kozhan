#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout << "Работает информационная система СШ 23" << endl << "1. Новости дня" << endl << "2. Анекдот недели" << endl << "3. Автора!!!" << endl << "0. Выход" << endl << "Введите соответствующий номер и нажмите ENTER." << endl;
	cin >> a;
	do {
		switch (a)
		{

		case 1:
			cout << "Новости дня: Галина Васильевна организовывает <Літературну вітальню>, всем желающим записываться в кабинете 210!" << endl;
			break;
		case 2:
			cout << "Анекдот недели: Колобок повесился!" << endl;
			break;
		case 3:
			cout << "Автор: Кожан Анастасия" << endl;
			break;
		default: cout << "Введите валидное значение!" << endl;
		}
		cout << "Работает информационная система СШ 23" << endl << "1. Новости дня" << endl << "2. Анекдот недели" << endl << "3. Автора!!!" << endl << "0. Выход" << endl << "Введите соответствующий номер и нажмите ENTER." << endl;
		cin >> a;
	}
			while (a != 0);

		
		system("pause");
		return 0;
	
}