

#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[10], surname[15], patr[15], male[8], dob[9], address[20], numb[11], pos[20], form[10], hobby[15];
	cout<< "Фамилия?= ";
	cin >> surname;
	cout << "Имя?= ";
	cin >> name;
	cout << "Отчество?= ";
	cin >> patr;
	cout << "Пол?= ";
	cin >> male;
	cout << "Дата рождения?= ";
	cin >> dob;
	cout << "Адрес?= ";
	cin >> address;
	cout << "Номер телефона?= ";
	cin >> numb;
	cout << "Место учебы?= ";
	cin >> pos;
	cout << "Класс?= ";
	cin >> form;
	cout << "Хобби?= ";
	cin >> hobby;
	cout << "                                             А Н К Е Т А" << endl;
	cout << "Фамилия                                       Имя                                       Отчество" << endl;
	cout << "-------                                       ---                                       --------" << endl;
	cout << surname<<"                                         "<<name<<"                                     "<<patr << endl;
	cout << "Пол                                           Дата рождения                             Номер телефона" << endl;
	cout << "---                                           -------------                             --------------" << endl;
	cout << male << "                                       " << dob << "                                " << numb << endl;
	cout << "Адрес" << endl;
	cout << "-----" << endl;
	cout << address << endl;
	cout << "Место учебы                                   Класс" << endl;
	cout << "-----------                                   -----" << endl;
	cout << pos << "                                        " << form << endl;
	cout << "Хобби" << endl;
	cout << "-----"<<endl;
	cout << hobby << endl;
	system("pause");
	return 0;
}

