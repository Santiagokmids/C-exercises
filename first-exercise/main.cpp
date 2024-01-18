#include <iostream> //es lo mismo que importar, y es la libreria estándar de C++

//primer programa en c++

using namespace std;

int main() { //función principal

    cout << "Hello, World!" << endl;
    cout << "Esto es el primer programa en c++ \n";
    //endl = endline = \n


    //---------------TIPOS DE DATOS EN C++----------------------

    //Tipo de dato entero
    int number = 7;
    cout << number << endl; //Si no se COLOCA EL ENDL o \n NO VA A IMPRIMIR LO QUE DEBERÍA, SINO LA ÚLTIMA LÍNEA

    //Tipo de dato flotante
    float floatNumber = 10.7;
    cout <<floatNumber << endl;

    //Tipo de dato double
    double doubleNumber = 13.1545;
    cout << doubleNumber << endl;

    //Tipo de dato char
    char charVar = 'S';
    cout << charVar << endl;

    return 0; //Siempre se coloca como buena práctica
}
