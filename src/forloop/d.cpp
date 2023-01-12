#include <iostream>
using namespace std;

int FoorloopD()
{
    // Initial variabel
    int t = 0, i, j;

    // Loop pertama dilakuakn 3x (0, 2, 4);
    for (i = 0; i <= 4; i+=2) {
        // Loop kedua dilakuakn 3x (1, 4, 7);
        for (j = 1; j <= 8; j+=3) {
            cout << "|" << t << "+";
            t = t + j;
            cout << j << "| ";
        }
        cout << "= " << t << ", " << endl;
    }
    
    return 0;
}