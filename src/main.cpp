// Example program
#include <iostream>
using namespace std;

int main()
{

    int x, y, z, a, temp_besar;

    cout << "Masukan Bilangan Bulat" << endl;

    cout << "Masukan Nilai x :" << endl;
    cin >> x;

    cout << "Masukan Nilai y :" << endl;
    cin >> y;

    cout << "Masukan Nilai z :" << endl;
    cin >> z;

    cout << "Masukan Nilai a :" << endl;
    cin >> a;

    if (x > y)
    {
        temp_besar = x;
    }
    else
    {
        temp_besar = y;
    }

    if (temp_besar > z)
    {
        temp_besar = temp_besar;
    }
    else
    {
        temp_besar = z;
    }

    if (temp_besar > a)
    {
        temp_besar = temp_besar;
    }
    else
    {
        temp_besar = a;
    }

    cout << temp_besar;

    return 0;
}