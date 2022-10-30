#include <iostream>
#include <string>

using namespace std;

int main ()
{
    for (int i = 0; i < 21; i++) {
        string status;
        if (i % 2) {
            status = "Genap";
        } else {
            status = "Ganjil";
        }
        cout << i << " Merupakan Bilangan " << status << endl;
    }
}