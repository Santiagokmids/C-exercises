#include <iostream>

using namespace std;

int main() {
    cout << "Los arreglos: " << endl;

    //Son lo mismo que en java, y se definen así...
    int arregloNum[5];
    char arregloChar[10];
    string arregloString[20];

    //También se pueden definir así...
    int arregloNum2[] = {2, 1, 3, 4};
    //O....
    int arregloNum3[3] = {2, 3, 520};

    cout << "Vamos a imprimir los valores del arreglo 2 y sus respectivos indices: " << endl;

    for (int i = 0; i <= 3; ++i) {
        cout << i << " -> " << arregloNum2[i] << endl;
    }

    return 0;
}
