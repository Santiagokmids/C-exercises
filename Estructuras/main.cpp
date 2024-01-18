#include <iostream>

using namespace std;

struct coleccion_movie{
    string title;
    int anio_publicacion{};
    float price{};
}cm4;

int main() {

    // ------------------------- ESTRUCTURAS --------------------
    /*
     * Las estructuras son bloques con uno o más tipos de datos, por ejemplo, con números y caracteres
     * Son como CLASES EN JAVA
     */

    //Ejemplo de una estructura

    struct coleccion_cd{
        string title;
        int anio_publicacion;
        int tamanio;
        int num_canciones;
        string artista;
        float price;
    }cd1, cd2, cd3; //se pueden declarar así

    //O también se pueden declarar así
    struct coleccion_movie cm1 = {"Insidius", 98, 120.3},
            cm2 = {"Peppa", 2024, 20},
            cm3 = {"Lola", 2020, 100};

    //Cada una de esas variables, contiene cada campo de la estructura
    cout << "Pelicula 1:" << endl;
    cout << "Nombre: " << cm1.title << " Publicacion: " << cm1.anio_publicacion << " Precio: " << cm1.price << endl;

    cout << "Pelicula 2:" << endl;
    cout << "Nombre: " << cm2.title << " Publicacion: " << cm2.anio_publicacion << " Precio: " << cm2.price << endl;

    cout << "Pelicula 3:" << endl;
    cout << "Nombre: " << cm3.title << " Publicacion: " << cm3.anio_publicacion << " Precio: " << cm3.price << endl;

    //-------------------------------------------------------------
    cout << "\nPelicula 4:" << endl;

    fflush(stdin); //ME LIMPIA EL BUFFER

    cout << "Digite el nombre de la pelicula:" << endl;

    getline(cin, cm4.title); //ASI SE LEE STRING EN C++

    cout << "Digite el anio de publicacion de la pelicula:" << endl;
    cin >> cm4.anio_publicacion;

    cout << "Digite el precio de la pelicula:" << endl;
    cin >> cm4.price;
    cout << "Nombre: " << cm4.title << " Publicacion: " << cm4.anio_publicacion << " Precio: " << cm4.price << endl;


    //--------------------------------- ESTRUCTURAS ANIDADAS ------------------------------
    struct director{
        string name;
        struct coleccion_movie movie;
    }directores[2];

    directores[0] = {"Pedro", {"Mano", 2005, 167}};
    directores[1] = {"Alberto", {"Pie", 2000, 52.15}};

    cout << "DIRECTORES " << endl;

    cout << "Nombre: " << directores[0].name << " Pelicula: " << directores[0].movie.title << " Precio: " << directores[0].movie.price << endl;
    cout << "Nombre: " << directores[1].name << " Pelicula: " << directores[1].movie.title << " Precio: " << directores[1].movie.price << endl;

    return 0;
}
