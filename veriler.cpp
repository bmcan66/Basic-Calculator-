#include <iostream>
using namespace std;

// Fonksiyon bildirimi (önceden tanımlıyoruz ki compiler tanısın)
double hesapla(double a, double b, char islem);

int main() {
    double a, b;
    char islem;

    cout << "Birinci sayiyi girin: ";
    cin >> a;
    cout << "Ikinci sayiyi girin: ";
    cin >> b;
    cout << "Bir islem sec (+, -, *, /): ";
    cin >> islem;

    double sonuc = hesapla(a, b, islem);
    cout << "Sonuc: " << sonuc << endl;

    system("pause");

    return 0;
}
