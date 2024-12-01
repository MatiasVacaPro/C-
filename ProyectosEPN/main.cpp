#include <iostream>
#include  <string>
using namespace std;

int main() {
    string contrasenia;

    cout << "Ingrese su contrasenia Valida: ";
    getline(cin, contrasenia);
    try {


        if ( contrasenia.length()<6 )

        throw "Error: La contraseña debe tener almenos 6 caracteres";

    for(char c: contrasenia) {
        if(isspace(c)) {
            throw "Error: La contraseña no puede tener ccontener espacios";
        }
    }
    string contracCorr = "12345678";
    if (contrasenia != contracCorr) {
        throw "Error: Contraseña Invalida";
    }
    cout << "Contraseña correcta. Acceso permitido";
    return 0;
    } catch (const char* e) {
        cout << e << endl;
    }
    cout << "El programa ha terminado con errores";
    return 0;
}
