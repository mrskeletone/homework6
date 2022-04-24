#include "Header.h"

void pyz(Complex* arr, unsigned size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].compareTo(arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void pyz(int* arr, unsigned size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void pyz(double* arr, unsigned size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

bool Complex::compareTo(Complex n)
{
    return (this->modul() > n.modul());
}
double Complex::modul()
{
    return sqrt(this->im * this->im + this->re * this->re);
}
