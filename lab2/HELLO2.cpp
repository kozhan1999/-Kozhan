
#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[10];
	cout << "Как Вас зовут: ";
	cin >> name ;
	cout << "Здравствуйте, "<<name<<"!"<< endl;
	system("pause");
	return 0;
}

