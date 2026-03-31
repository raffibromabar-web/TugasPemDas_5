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

    while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return (a == n); 
}

void tampilHasilPrima() {
        if (isPrima(angka)) {
        cout << ">> Hasil: " << angka << " ADALAH bilangan prima." << endl;
    } else {
        cout << ">> Hasil: " << angka << " BUKAN bilangan prima." << endl;
    }
}

void tampilHasilFibonacci() {
    if (isFibonacci(angka)) {
        cout << ">> Hasil: " << angka << " TERMASUK dalam deret Fibonacci." << endl;
    } else {
        cout << ">> Hasil: " << angka << " TIDAK TERMASUK dalam deret Fibonacci." << endl;
    }
}

int main() {
    pilihan = -1;

    while (pilihan != 0) {
        tampilMenu(); 
        
        switch (pilihan) {
            case 1:
                inputAngka();
                tampilHasilPrima();
                break;
                
            case 2:
                inputAngka();
                tampilHasilFibonacci();
                break;
                
            case 0:
                cout << "\nKeluar dari program. Terima kasih!" << endl;
                break;
                
            default:
               
                cout << "\nPeringatan: Pilihan tidak valid! Silakan masukkan 0, 1, atau 2." << endl;
                break;
        }
    }
    return 0;
}