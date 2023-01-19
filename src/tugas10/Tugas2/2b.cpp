#include <iostream>

using namespace std;

int Tugas2B()
{
    double a[3][5] = {{0.1, 0.1, 0.1, 0.1, 0.1}, {0.1, 0.1, 0.1, 0.1, 0.1}, {0.1, 0.1, 0.1, 0.1, 0.1}};
    int j, i, b, c;

    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 4; j+=2) {
            a[i][j] = j;
            cout << a[i][j] << " , ";
        }
        cout << endl;
    }

    cout << "====== TEST ======" << endl;

    for (b = 0; b <= 2; b++) {
        for (c = 0; c <= 4; c++) {
            cout << a[b][c] << " , ";
        }
        cout << endl;
    }
    return 0;
}