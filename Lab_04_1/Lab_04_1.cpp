// Lab_04_1.cpp
// Лукічова Катерина
// Лабораторна робота No 4.1
// Цикли
// Варіант 12

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	i = N;
	while (i <= 22)
	{
		S += sqrt(i*i + N*N)/i;
		i++;
	}
	cout << S << endl;
	S = 0;
	i = N;
	do {
		S += sqrt(i*i + N*N) / i;
		i++;
	} while (i <= 22);
	cout << S << endl;
	S = 0;
	for (i = N; i <= 22; i++)
	{
		S += sqrt(i*i + N*N) / i;
	}
	cout << S << endl;
	S = 0;
	for (i = 22; i >= N; i--)
	{
		S += sqrt(i*i + N*N) / i;
	}
	cout << S << endl;
	cin >> N;
	return 0;
}
