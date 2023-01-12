#include <iostream>
using namespace std;

int FoorloopC()
{
    // Initial variabel
    int t = 0, i, j;

    // Loop pertama dilakuakn 3x (0, 2, 4);
    for (i = 0; i <= 4; i+=2) {
        // Loop kedua dilakuakn 3x (1, 4, 7);
        for (j = 1; j <= 8; j+=3) {
            // print nilai t (0) sebanyak looping ke 2 (3x)
            cout << t << " ";
        }
        cout << endl;
    }
    
    return 0;
}