#include <iostream>

using namespace std;

int Tugas2A()
{
    int a[3][5];
    int j, i;

    for (j = 0; j <= 4; j++) {
        for (i = 0; i <= 2; i++) {
            a[i][j] = i;
            cout << a[i][j] << " , ";
        }
        cout << endl;
    }

    return 0;
}