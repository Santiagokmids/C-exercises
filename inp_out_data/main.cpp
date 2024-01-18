#include <iostream>
#include <math.h> //libreria matematica y trigonometrica

using namespace std;

int main() {

    int number1, number2, suma = 0, resta = 0, mul = 0, div = 0;

    cout << "Digite un numero: ";
    cin >> number1; //Así se guarda la variable

    cout << "Digite otro numero: ";
    cin >> number2; //Así se guarda la variable

    suma = number1 + number2;
    resta = number1 - number2;
    mul = number1 * number2;
    div = number1 / number2;

    cout << "\nEl primer numero ingresado es: " << number1 << " y el segundo es: "<< number2 << endl;

    cout << "Las operaciones realizadas con dichos numeros son: \n" ;

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << mul << endl;
    cout << "Division: " << div << endl;

    //Los char pueden tener un tamaño fijo haciendo esto;
    //char variable[10], esto significa que variable es de 10 caracteres

    //Para redondear
    float num1 = 10.1254;
    float num2 = 21.1551;
    float sum = num1 + num2;

    cout.precision(4); //me redondea al techo, dando una precisión con la cantidad de digitos especificados
    cout << "El resultado es: " << sum << endl;

    //Calcular la raiz cuadrada de number1
    double raiz = sqrt(number1);
    cout << "La raiz cuadrada de: "<< number1 << " es " << raiz << endl;

    //Sacar la potencia al cuadrado de number2
    double pot = pow(number2, 2);
    cout << "La potencia cuadrada de: "<< number2 << " es " << pot << endl;

    return 0;
}
