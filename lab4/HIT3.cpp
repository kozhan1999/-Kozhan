#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x0 = 0, y0 = 0, x, y, r= 7, xA, yA;
	cout << "Введите абсциссу точки А = ";
	cin >> x;
	cout << "Введите ординату точки А = ";
	cin >> y;
	if (((x0 - x)*(x0 - x) + (y0 - y)*(y0 - y)) > r * r)
	{
		cout << "Точка А с координатами (" << x << ", " << y << ") не попадает в круг с центром (" << x0 << ", " << y0 << ") и радиусом = " << r << endl;
		while (((x0 - x)*(x0 - x) + (y0 - y)*(y0 - y)) > r * r)
		{
			xA = x;
			yA = y;
			cout << "Введите абсциссу точки А = ";
			cin >> x;
			cout << "Введите ординату точки А = ";
			cin >> y;
			
			if (((x0 - x)*(x0 - x) + (y0 - y)*(y0 - y)) <= r * r)
				cout << "Точка А с координатами (" << x << ", " << y << ")  попадает в круг с центром (" << x0 << ", " << y0 << ") и радиусом = " << r << endl;
			else
			{
				if (((x0 - x)*(x0 - x) + (y0 - y)*(y0 - y)) > ((x0 - xA)*(x0 - xA) + (y0 - yA)*(y0 - yA)))
					cout << "Холоднее" << endl;
				if (((x0 - x)*(x0 - x) + (y0 - y)*(y0 - y)) < ((x0 - xA)*(x0 - xA) + (y0 - yA)*(y0 - yA)))
					cout << "Теплее" << endl;
				if (((x0 - x)*(x0 - x) + (y0 - y)*(y0 - y)) == ((x0 - xA)*(x0 - xA) + (y0 - yA)*(y0 - yA)))
					cout << "Те же координаты" << endl;
			}
		}
	}
	else 
		cout << "Точка А с координатами (" << x << ", " << y << ")  попадает в круг с центром (" << x0 << ", " << y0 << ") и радиусом = " << r << endl;

	system("pause");
	return 0;
}