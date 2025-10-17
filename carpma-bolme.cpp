#include <iostream>
using namespace std;

int carpmaBolme(double a, double b, char islem) {
    if (islem == '*') {
        cout << "Sonuc: " << a * b << endl;
    }
    else if (islem == '/') {
        if (b != 0)
            cout << "Sonuc: " << a / b << endl;
        else
            cout << "Sifira bolme hatasi!" << endl;
    }
    else {
        cout << "Gecersiz islem!" << endl;
    }

return 0;
}

