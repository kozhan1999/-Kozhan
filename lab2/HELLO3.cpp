
#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[10], placeOfStudying[15];
	int age;
	cout << "Как Вас зовут: ";
	cin >> name;
	cout << "Сколько Вам лет: ";
	cin >> age;
	cout << "Где Вы учитесь: ";
	cin >> placeOfStudying;
	if (age%10==1 && age%100 !=11)
	cout << "Здравствуйте, " << name <<"!\n"<<"Поздравляем Вас, Вам всего "<<age<<" год, а Вы уже ведете диалог с компьютером\n"<<placeOfStudying<<" будет гордиться Вами!";
	else if ((age%10== 2 || age%10== 3 || age%10== 4)&& age%100!= 12 && age % 100 !=13 && age % 100 != 14 )
	cout << "Здравствуйте, " << name << "!\n" << "Поздравляем Вас, Вам всего " << age << " года, а Вы уже ведете диалог с компьютером\n" << placeOfStudying << " будет гордиться Вами!";
	else 
	cout << "Здравствуйте, " << name << "!\n" << "Поздравляем Вас, Вам всего " << age << " лет, а Вы уже ведете диалог с компьютером\n" << placeOfStudying << " будет гордиться Вами!";
	system("pause");
	return 0;
}

