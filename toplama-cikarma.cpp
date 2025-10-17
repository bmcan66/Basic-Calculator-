#include <iostream>
using namespace std;

int carpmaBolme(double a, double b, char islem); 
int main() {
    double a, b;
    char islem;

    cout << "Birinci sayiyi girin: ";
    cin >> a;
    cout << "Ikinci sayiyi girin: ";
    cin >> b;
    cout << "Bir islem sec (+, -, *, /): ";
    cin >> islem;

    if (islem == '+')
        cout << "Sonuc: " << a + b << endl;
    else if (islem == '-')
        cout << "Sonuc: " << a - b << endl;
    else
        carpmaBolme(a, b, islem);

    return 0;
}
