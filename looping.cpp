#include <iostream>

using namespace std;

int angka;
int pilihan;

void tampilMenu() {
    cout << "\n=======================================" << endl;
    cout << "  PROGRAM PENGECEKAN ANGKA (PRIMA & FIBONACCI)" << endl;
    cout << "=======================================" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

}

void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

bool isPrima(int n) {
    if (n <= 1) {
        return false;
    }

    int i = 2;
    
    while (i * i <= n) {
        if (n % i == 0) {
            return false; 
        }
        i++;
    }
    return true;
}

bool isFibonacci(int n) {
    if (n < 0) {
        return false;
    }

    int a = 0;
    int b = 1;
}