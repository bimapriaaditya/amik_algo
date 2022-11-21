// Example program
#include <iostream>
using namespace std;

int main()
{

    float n;

    cout << "=========== Soal 3.b =========== " << endl;

    cout << "Maskan nilai ke n : " << endl;
    cin >> n;

    if (n > 50)
    {
        n = n + 10;
    }

    n = n + 10;

    cout << "Total nilai adalah : " << n << endl;

    return 0;
}