#include <iostream>
#include <cmath>
using namespace std;

int BinerToDecimal() {
    string binary;
    int decimal = 0;

    cout << "Masukan Nilai Biner: ";
    cin >> binary;

    int len = binary.length();
    for (int i = 0; i < len; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, len-i-1);
        }
    }

    cout << "Hasil desimalnya adalah: " << decimal << endl;
    return 0;
}
