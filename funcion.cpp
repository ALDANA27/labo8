#include <iostream>
using namespace std;

int mayor(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int a, b, c;

    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
    cout << "Ingresa el tercer numero: ";
    cin >> c;

    cout << "El mayor es: " << mayor(a, b, c) << endl;

    return 0;
}