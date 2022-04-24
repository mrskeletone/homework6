
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <math.h>
using namespace std;
struct  Complex
{
    double im = 0;
    double re = 0;
    bool compareTo(Complex n);
    double modul();

};
void pyz(Complex* arr, unsigned size);
void pyz(int* arr, unsigned size);
void pyz(double* arr, unsigned size);
#endif // !COMPLEX_H
