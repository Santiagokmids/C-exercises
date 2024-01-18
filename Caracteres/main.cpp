#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char nombre[] = "Santiago";

    //O también...
    /*char nombre2[] = {'S', 'A', 'N', 'T', 'I'};

    //NO SE DEBE USAR CIN PARA GUARDAR CADENA DE CARACTERES
    char name[20];

    cout << "Digite su nombre: ";
    //cin >> name; //NO SE DEBE HACER ASÍIIIIIIIIIIII

    //Lo mejor es hacer...
    cin.getline(name, 20, '\n'); //Los parámetros que me toma son: variable donde va a guardar, tamaño del arreglo y cuando acabar de permitir caracteres

    cout << name;
    */

    // -------------------------------- Cómo saber la longuitud de una cadena... ----------------------------------------
    int longuitud = 0;
    longuitud = strlen(nombre);

    cout << "La cadena: "<< nombre << ", tiene longuitud " << longuitud << endl;

    // ------------------------- Copiar el contenido de una cadena a otra
    char nombre2[20];
    strcpy(nombre2, nombre); //La primera es la variable vacía donde meteremos el valor de la copia

    cout << "La nueva cadena es: " << nombre2 << endl;


    // ------------------------- Cómo comparar dos cadenas ----------------------------------------
    char nombre3[] = "Angelica";

    if (strcmp(nombre, nombre3) == 0){
        cout << "Ambos nombres son iguales" << endl;

    } else{
        //Cuando es igual a 1 o diferente a 0
        cout << "Los nombres no son iguales" << endl;
    }

    //EL COMPARA CON SUS MAYUSCULAS Y MINUSCULAS. SI UNA TIENE UNA MAYUSCULA QUE OTRA NO, NO SERÁN IGUALES
    if (strcmp(nombre, nombre2) == 0){
        cout << "Ambos nombres son iguales" << endl;

    } else{
        cout << "Los nombres no son iguales" << endl;
    }

    //LA FUNCION STRCMP TAMBIEN ME DICE QUÉ CADENA ES MAYOR ALFABETICAMENTE


    //-------------------------- CONCATENAR CADENAS ----------------------------
    char juntos[30];

    strcpy(juntos, nombre);
    strcat(juntos, nombre3);

    cout << "Asi quedan las cadenas unidas: " << juntos << endl;


    // --------------------- Invertir una cadena --------------------
    char inver[30];
    strcpy(inver, nombre3);

    cout << "La cadena invertida es: " << strrev(inver) << endl;



    // --------------------- Pasar una cadena a mayusculas--------------------
    cout << "La cadena en mayusculas es: " << strupr(nombre3) << endl;


    // --------------------- Pasar una cadena a minusculas--------------------
    cout << "La cadena en minusculas es: " << strlwr(nombre3) << endl;


    // --------------------- Pasar una cadena a numeros --------------------
    char cad[] = "12345";
    int numInt = atoi(cad);

    cout << "La cadena en numero es: " << numInt << endl;

    char cad2[] = "12345.15";
    float numFlo = atof(cad2);

    cout << "La cadena en int es: " << numInt << endl;
    cout << "La cadena en float es: " << numFlo << endl;

    return 0;
}
