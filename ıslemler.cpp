double hesapla(double a, double b, char islem) {
    switch (islem) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else
                return 0; // Sıfıra bölünmeyi engelle
        default:
            return 0;
    }
}
