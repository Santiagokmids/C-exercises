#include <iostream>

using namespace std;

struct Person{
    string name;
    int age;
};

//Prototipo de función
int findMax(int x, int y); //Obligatorio para que corra
void changeValues(int&, int&); //Paso de parámetros por referencia
void showPersonDates(Person);

int main() {
    int numX, numY;

    cout << "Digite dos numeros " << endl;
    cin >> numX >> numY;

    int numMax = findMax(numX, numY);

    cout << "El numero mayor es: " << numMax << endl;

    changeValues(numX, numY);

    cout << "El valor nuevo del primer numero es " << numX << endl;
    cout << "El valor nuevo del segundo numero es " << numY << endl;

    Person p1 = {"Andres", 20};

    showPersonDates(p1);

    return 0;
}

//Definición de función
int findMax(int x, int y){

    int numMax;

    if (x > y){
        numMax = x;

    } else{
        numMax = y;
    }

    return numMax;
}

void changeValues(int& num1, int& num2){ //Con el "&" se hace referencia a su referencia en memoria
    cout << "El valor actual del primer numero es " << num1 << endl;
    cout << "El valor actual del segundo numero es " << num2 << endl;

    cout << "Digite dos numeros nuevos " << endl;
    cin >> num1 >> num2; //Así puedo cambiar dos numeros de forma fácil
}

void showPersonDates(Person person){
    cout << "La persona se llama " << person.name << " y tiene " << person.age << " anios." << endl ;
}