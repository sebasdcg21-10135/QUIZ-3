#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Asignatura
{
    char codigo_asignatura[7];
    char nombre_asignatura[20];
};

int main()
{
    Asignatura asignaturas[5] = {
        {"MA1111", "Matematicas I"},
        {"FS1111", "Fisica I"},
        {"EC1251", "Circuitos I"},
        {"CT1212", "Ing. Electrica"},
        {"CI2125", "Computacion I"}};

    ofstream archivo("asignaturas.txt");

    if (!archivo)
    {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        archivo << asignaturas[i].codigo_asignatura << " " << asignaturas[i].nombre_asignatura << endl;
    }

    archivo.close();
    cout << "Archivo 'asignaturas.txt' generado exitosamente." << endl;
    return 0;
}
