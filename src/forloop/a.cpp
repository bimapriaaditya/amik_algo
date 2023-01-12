#include <iostream>
using namespace std;

int FoorloopA()
{
    int i, j;
    for (i = 0; i <= 4; i+=2) {
        for (j=1; j <= 8; j+=3) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}