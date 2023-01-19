#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string binaryToHex(string binary) {
    string hex = "";
    string hexValues[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
    string fourBits;
    int decimal;
    unsigned int i;

    while (binary.length() % 4 != 0) {
        binary = '0' + binary;
    }

    for (i = 0; i < binary.length(); i += 4) {
        fourBits = binary.substr(i, 4);
        decimal = 0;
        for (int j = 0; j < 4; j++) {
            if (fourBits[j] == '1') {
                decimal += pow(2, 3-j);
            }
        }
        hex += hexValues[decimal];
    }
    return hex;
}

int Converter() {
    string binary;
    cout << "Masukan Nilai Biner: ";
    cin >> binary;

    cout << "Hasil Hexadesimal adalah: " << binaryToHex(binary) << endl;
    return 0;
}
