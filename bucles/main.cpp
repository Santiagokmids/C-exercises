#include <iostream>
#include <conio.h> //Se usa para que usar función que hace que el programa no acabe solo
#include <stdlib.h> //Se usa para que usar función que hace que el programa no acabe solo, sino que se pause

using namespace std;

int main() {

    int i = 1;

    //--------------- WHILE --------------------- IGUAL QUE EN JAVA
    while(i <= 10){
        cout << i << endl;
        i++;
    }
    //getch(); //Hace que toque presionar una tecla para que el programa acabe

    //----------------------------------- CUANDO UNO COMPILA EL C++ GENERA UN EJECUTABLE DE TIPO .EXE -----------------



    //--------------- DO WHILE --------------------- IGUAL QUE EN JAVA
    i = 1;
    cout << "" << endl;

    do {
        cout << i << endl;
        i++;
    }while(i <= 10);

    //system("pause"); //tambien pausa el programa pero pide la letra con texto



    //--------------- FOR --------------------- IGUAL QUE EN JAVA
    cout << "" << endl;

    for (int j = 0; j < 10; ++j) {
        cout << j << endl;
    }

    //Si quiero pedir que un número esté dentro de un rango específico, le puedo hacer así:
    int num;

    do {
        cout << "Digite un numero mayor a 20, menor a 30 o igual a 0: ";
        cin >> num;
    } while ((num > 20 || num < 30) && num != 0); //Se coloca la condición contraria a lo que se pide para que se itere hasta que se cumpla
    //Va a correr hasta que no se cumpla la condicion dentro del while

    return 0;
}
