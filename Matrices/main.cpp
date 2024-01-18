#include <iostream>

using namespace std;

int main() {

    //Las matrices se definen de la forma...
    //matriz[filas][columnas]

    int numeros[2][3] = {{1, 2, 20}, {3, 2, 10}};

    //O también se puede así...
    int numeros2[2][2] = {1,2,   3, 2};

    //Las matrices se leen como en java
    cout << "La primera matriz ya definida es: " << endl;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {

            cout << "[" << numeros[i][j] << "] ";
        }
        cout << "\n";
    }

    return 0;
}
