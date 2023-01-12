#include <iostream>
using namespace std;

int FoorloopB()
{
    // initialisasi variabel integer
    int i, j;

    // looping pertama akan di loop sebanyak 3x (0, 2, 4)
    for (i = 0; i <= 4; i+=2) {
        // looping kerdua ini akan di loop sebanyak 3x (1, 4, 7)
        for (j=1; j <= 8; j+=3) {
            // looping data i sebanyak looping ke 2 (3x)
            cout << i << " ";
            // outpout yang keluar (0 0 0), (2 2 2), (4, 4, 4)
        }
        cout << endl;
    }
    return 0;
}