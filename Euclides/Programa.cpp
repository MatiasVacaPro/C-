#include <iostream>
using namespace std;

int main() {
    int a, b, resto;
    
    // Entrada de datos
    cout << "Ingrese el primer número entero positivo (a): ";
    cin >> a;
    cout << "Ingrese el segundo número entero positivo (b): ";
    cin >> b;
    
    // Algoritmo de Euclides
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    
    // Salida del resultado
    cout << "El MCD es: " << a << endl;
    
    return 0;
}