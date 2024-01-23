#include <iostream>

using namespace std;

float factorial(float number);
int sumNPositives(int number);

int main() {
    float number;

    cout << "Digite el numero del que desea sacar el factorial: " << endl;
    cin >> number;

    float facNumber = factorial(number);

    cout << "El factorial del numero " << number << " es "<< facNumber << endl;

    // ---------------------------------------------------------------------------------
    int sumNumber;
    cout << "\nDigite el numero para calcular su suma: " << endl;
    cin >> sumNumber;

    int sumOfNumber = sumNPositives(sumNumber);

    cout << "La suma del numero " << sumNumber << " es "<< sumOfNumber << endl;

    return 0;
}

float factorial(float facNumber){

    if (facNumber == 0){
        facNumber = 1;

    } else{
        facNumber = facNumber * factorial(facNumber - 1);
    }
    return facNumber;
}

int sumNPositives(int sumOfNumber){

    if (sumOfNumber == 1){
        sumOfNumber = 1;

    } else{
        sumOfNumber = sumOfNumber + sumNPositives(sumOfNumber - 1);
    }

    return sumOfNumber;
}
