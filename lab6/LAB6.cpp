#include "pch.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, m;
	const int N = 100;
	const int M = 100;
	cout << "Введите натуральное число N (>0 i <100)= ";
	cin >> n;
	cout << "Введите натуральное число M(>0 i <100) = ";
	cin >> m;
	if (n >= N || n<=0 )
	{
		while (n >= N || n<=0 )
		{
			cout << "Введите натуральное число N(>0 i <100) = ";
			cin >> n;
			
				}
	}
	if (m >= M ||m<=0)
	{
		while (m >= M ||m<=0)
		{
			cout << "Введите натуральное число M(>0 i <100) = ";
			cin >> m;

		}
	}
	int a[N];
	int b[M];
	int  minA, minB, n0, m0;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i + 1 << "] = ";
		cin >> a[i];
		
	}
	
	minA = abs(a[0]);
	n0 = 0;
	for (int i = 0; i < n; i++)
	{
		
		if (abs(a[i]) <= minA)
		{
			minA = abs(a[i]);
			n0 = i;
		}
	}
	
	for (int i = 0; i < m; i++)
	{
		cout << "b[" << i + 1 << "] = ";
		cin >> b[i];
	}
	
	minB =abs( b[0]);
	m0 = 0;
	for (int i = 0; i < m; i++)
	{
		if (abs(b[i]) <= minB)
		{
			minB = abs(b[i]);
			m0 = i;
		}
	}
	double dobA = 1, dobB = 1, dob;
	if ((n != n0 + 1) && (m != m0 + 1))
	{
		
		for (int i = n0+1; i < n; i++)
		{
			dobA = dobA * a[i];
		}
		for (int i = m0+1; i < m; i++)
		{
			dobB = dobB * b[i];
		}
		dob = dobA * dobB;
		cout << "Добуток = " << dob<<endl;
	}
	else
		cout << "Модуль минимального элемента является последним в массиве." << endl;
	/*int r = m0;
	
	if (m0 <= n0)
	{
		r = m0;
		m0 = n0;
		n0 = r;
	}
	
		for (int i = m0+1; i < m; i++)
		{
			n0++;
			if (n0< n)
			{
				dob = abs(b[i]) *abs( a[n0]);
				cout << dob << "  ";
			}
			
		}*/
	
	
	cout << endl;

	system("pause");
	return 0;
}