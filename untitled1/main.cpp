#include <iostream>
using namespace std;

int main() {
    int numero = 0, suma = 0, cantidad = 0;
    float promedio = 0;

    do {
        cout << "Ingrese un numero para promediar (-1 para terminar): ";
        cin >> numero;

        // Validador primario de los limites de los numeros a ingresar
        if ((numero >= 0 && numero <= 100) || (numero == -1)) {
            if (numero != -1) {
                suma = suma + numero;
                cantidad++;
            }
        } else {
            cout << "Numero incorrecto, ingrese otro numero valido.\n";
        }

    } while (numero != -1);

    if (cantidad > 0) {
        promedio = static_cast<float>(suma) / cantidad;
        cout << "El promedio es: " << promedio << endl;
    } else {
        cout << "No se ingresaron numeros validos." << endl;
    }

    return 0;
}
