#include <iostream>

using namespace std;

int main() {

    int dato = 5, num;

    cout << "Inserte un numero: ";
    cin >> num;

    //---------------- Condicionales Simples ---------------------
    
    if (dato == num){
        cout << "\nEl numero es igual a 5";

    }else if (dato < num){
        cout << "\nEl numero es mayor a 5";

    } else{
        cout << "\nEl numero es menor a 5";
    }

    //Todos los condicionales son iguales a los usados en Java


    //---------------- Condicionales Múltiples ---------------------

    switch (num) {
        case 1:
            cout << "\nEl numero es 1";
            break;

        case 2:
            cout << "\nEl numero es 2";
            break;

        case 3:
            cout << "\nEl numero es 3";
            break;

        default:
            cout << "\nEl numero no es ni 1, ni 2 ni 3";
            break; //Los break son igual que en java de obligatorios
    }

    //---------------- NUMERO PAR ---------------------
    cout << "\n\n------- NUEVO BLOQUE DE EJERCICIOS ----- \n";

    int num1, num2;

    cout << "Digite dos numeros: ";
    cin >> num1 >> num2;

    cout << "\nLos numeros fueron " << num1 << " y el " << num2 << endl;
    if (num1 % 2 == 0){
        cout << "El numero es par \n";
    }

    //---------------- SWITCH SIN BREAK ---------------------

    cout << "Digite un caracter: ";
    char letra;
    cin >> letra;

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "El caracter es una vocal minuscula \n";
            break; //Solo se deja break aqui porque en caso de las letras anteriores, siempre va a imprimir lo mismo,
            //y recordemos que si no hay break, sigue derecho.
        default:
            cout << "El caracter no es una vocal minuscula \n";
            break;
    }

    //En los condicionales podemos usar && y ||, como en Java

    return 0;
}
