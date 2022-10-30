#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    x = 7;
    y = 5;
    z = 3;

    int z_a, z_b, z_c, z_d;
    z_a = y;
    cout << "a. Z = Y :" << z_a << endl;

    z_b = z + x;
    cout << "b. Z = z + x :" << z_b << endl;

    z_c = z - x * y;
    cout << "c. z - x * y :" << z_c << endl;

    z_d = z % y;
    cout << "d. z % y :" << z_d << endl;
}