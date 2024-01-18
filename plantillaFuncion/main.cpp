#include <iostream>

//Encontrar el valor absoluto de un numero

using namespace std;

//Para hacerlo de forma genérica hacemos un template
template <class TIPOD>
void mostrarAbs(TIPOD number);

int main() {

    int intNum;
    float floatNum;
    double doubleNum;

    cout << "Ingrese un numero entero" << endl;
    cin >> intNum;

    cout << "Ingrese un numero flotante" << endl;
    cin >> floatNum;

    cout << "Ingrese un numero double" << endl;
    cin >> doubleNum;

    mostrarAbs(intNum);
    mostrarAbs(floatNum);
    mostrarAbs(doubleNum);

    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD number){

    TIPOD absNum = number;

    if (number < 0){
        absNum = number * -1;
    }

    cout << "El valor absoluto de " << number << " es " << absNum << endl;
}