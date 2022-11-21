// Example program
#include <iostream>
#include <string>
using namespace std;

int Tugas2()
{
    float a, b, c ;
    string hasil;
    
    // Initialisasi Aplikasi
    cout << "PROGRAM MENENTUKAN SEGITIGA"<<endl;
    
    // Memasukan nilai A
    cout << "Masukan Panjang Garis A : ";
    cin >> a;
    
    // Memasukan nilai B
    cout << "Masukan Panjang Garis B : ";
    cin >> b;
    
    // Memasukan nilai C
    cout << "Masukan Panjang Garis C : ";
    cin >> c;
    
    // Rumus
    if (a+b > c && a+c > b && b+c > a) {
        hasil = "Panjang garis tersebut membentuk segitiga";
    } else {
        hasil = "Panjang garis tersebut bukan merupakan segitiga";
    }
    
    cout << hasil;
    
    return 0;
}