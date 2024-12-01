// Progrma que valida el ingreso de edades consecutivas//
// Created by Matías Vaca on 11/27/24.

// 1.0.0.0

#include <iostream>
#include <string>
using namespace std;

int main() {
    int edad;
    edad = 0;
    string entrada;
    bool validado = true;

    do {

        try {
            cout << "Ingreso una edad entre 0 y 120: " << endl;
            getline(cin,entrada);
            for (char c: entrada) {
                if(!isdigit(c)) {
                    throw "Error: Se a ingresado algo que no es un numero \n";
                }
            }
            edad = stoi(entrada);

            if(edad < 0 || edad >120) {
                throw "Error: La edad esta fuera del rango dado";

            }
            cout << "La edad ingresada es: " << edad << endl ;

        }catch (const char* e) {

            cout << e << "Intente de Nuevo \n";
        }
    } while (validado);
    cout << "Programa Validado";
    return 0;
}
