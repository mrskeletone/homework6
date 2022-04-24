﻿#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[10];
	double a, b;
	Complex crr[10];
	for (int i = 0; i < 10; i++) {
		a = rand() % 100 / 10. - 5;
		b = rand() % 50 / 10. - 2.5;
		crr[i] = { a,b };
	}

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 1000 + 1;
	}
	double brr[10] = { 1.1,2.2,3.3,4.4,5.5,6.6,15.7,8.8,9.9,10.10 };
	for (int i = 0; i < 10; i++) {
		brr[i] = rand() % 1000 / 100. + 1;
	}
	pyz(arr, 10);
	pyz(brr, 10);
	pyz(crr, 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << brr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (crr[i].re > 0) {
			cout << crr[i].im << "+" << crr[i].re << "i" << "    ";
		}
		else { cout << crr[i].im << crr[i].re << "i" << "    "; }
	}
}
