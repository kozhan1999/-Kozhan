#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int  x, y;
	
	cout << "Введите абсциссу точки А = ";
	cin >> x; 
	cout << "Введите ординату точки А = ";
	cin >> y;
	if ((((-8- x)*(-8 - x) + (5 - y)*(5 - y)) < 4) || ((y < 10 && y > 0 && y < (x + 10) && y >(-x) && x < 0 && x >-5)))
	{
		cout << "Точка А с координатами (" << x << ", " << y << ") попадает в заштрихованную область" << endl;
	}
	else if ((((-8 - x)*(-8 - x) + (5 - y)*(5 - y)) == 4) || ((y <= 10 && y >= 0 && (y == (x + 10) || y == (-x) || x == 0) && x <= 0 && x >= -5)))
	{
		cout << "Точка А с координатами (" << x << ", " << y << ") попадает на границы заштрихованной области" << endl;
	}
	else
		cout << "Точка А с координатами (" << x << ", " << y << ") не попадает в заштрихованную область" << endl;

	
	system("pause");
	return 0;
}