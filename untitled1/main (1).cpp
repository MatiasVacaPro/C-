#include <iostream>
using namespace std;
int main() {
    double oper1, oper2, resultado;
    char operacion;
    oper1 = oper2 = resultado = 0;

    do {
        cout<<"Ingrese los dos numeros  para la operacion:"<<endl;
        cin>>oper1;
        if (cin.fail()) {// Si el numero ingresado no es un numero
            break;
        }
        cin>>oper2;
        if (cin.fail()) {
            break;
        }
        cout <<"Ingrese la operacion a realizar (+/-/*//)";
        cin>>operacion;

        switch (operacion) {
            case '+':
                resultado = oper1 + oper2;
            break;
            case '-':
                resultado = oper1 - oper2;
            break;
            case '*':
                resultado = oper1 * oper2;
            break;
            case '/':
                if (oper2 != 0) {
                    resultado = oper1 / oper2;
                    cout<<"El resultado es:"<<resultado;

                    cout << "Error por romper el Universo";
                } else {
                    cout<<"El universo se rompio intente de nuevo\n";
                    break;
                }
            default:
                cout<<"Operacion invalida";
        }
        cout << "El resultado de los digitos es:  " << resultado << endl;
    }while(true);//Bucle Infinito por categorria de verdad hasta que se ingrese una letra para par asalir

    return 0;
}
