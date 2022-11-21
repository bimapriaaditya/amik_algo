// Example program
#include <iostream>
using namespace std;

int tugas3a()
{
    
    float n;

    cout << "=========== Soal 3.a =========== " << endl;
    
    cout << "Maskan nilai ke n : " << endl;
    cin >> n;

    if (n > 50) {
        n = n + 25;
    } else {
        n = n + 10;
    }

    cout << "Total nilai adalah : " << n << endl;
    
    return 0;
}