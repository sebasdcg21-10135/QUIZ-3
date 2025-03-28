# QUIZ-3
Computación - Laboratorio 3
1) Ilustre el procedimiento seguido (5 pts.)
2) Haga una prueba con cinco asignaturas cualquiera de su departamento (5 pts.)
3) Haga una evaluación de la experiencia (5pts.)

✅ OBJETIVO DEL QUIZ
Desarrollar un programa en C++ que cree un archivo llamado asignaturas.txt con las siguientes características:

Campos:

codigo_asignatura → char[7]

nombre_asignatura → char[20]

El programa debe:

- Definir una estructura Asignatura.
- Almacenar mínimo 5 asignaturas de tu departamento.
- Escribirlas en el archivo asignaturas.txt.


✍️ 1) Procedimiento seguido (5 pts)
Paso 1: Crear el archivo fuente

- Abre VS Code.
- Crea un nuevo archivo llamado registro_asignaturas.cpp.

Paso 2: Escribir el código

- Definimos un struct con los dos campos.
- Creamos un arreglo con 5 asignaturas.

Usamos ofstream para escribir los datos en asignaturas.txt.

💻 CÓDIGO EN C++

#include <iostream>

#include <fstream>

#include <cstring>

using namespace std;

// Estructura que representa una asignatura
struct Asignatura {
    char codigo_asignatura[7];
    char nombre_asignatura[20];
};

int main() {
    // Crear arreglo con 5 asignaturas del departamento de Ingeniería Eléctrica
    Asignatura asignaturas[5] = {
        {"MA1111", "Matematicas I"},
        {"FS1111", "Fisica I"},
        {"EC1251", "Circuitos I"},
        {"CT1212", "Ing. Electrica"},
        {"CI2125", "Computacion I"}
    };

    // Abrir archivo de salida
    ofstream archivo("asignaturas.txt");

    // Verificar si el archivo se abrió correctamente
    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    // Escribir los datos en el archivo
    for (int i = 0; i < 5; i++) {
        archivo << asignaturas[i].codigo_asignatura << " " << asignaturas[i].nombre_asignatura << endl;
    }

    archivo.close();

    cout << "Archivo 'asignaturas.txt' generado exitosamente." << endl;
    return 0;
}


<img width="1433" alt="Screen Shot 2025-03-28 at 4 47 07 PM" src="https://github.com/user-attachments/assets/85ec088f-7995-4293-a2ff-fdc2174e5dc0" />


✅ 2) Prueba con cinco asignaturas del pensum (5 pts)
Asignaturas utilizadas (todas del departamento):

- Código	Asignatura
- MA1111	Matemáticas I
- FS1111	Física I
- EC1251	Análisis de Circuitos I
- CT1212	Ing. Eléctrica
- CI2125	Computación I

<img width="759" alt="Screen Shot 2025-03-28 at 4 47 25 PM" src="https://github.com/user-attachments/assets/fc0bc251-9df9-4463-888d-697274f05ec8" />

<img width="1440" alt="Screen Shot 2025-03-28 at 4 47 38 PM" src="https://github.com/user-attachments/assets/66180e0d-9f97-449c-a68b-d40d5254ac2d" />


🧠 3) Evaluación de la experiencia (5 pts)
¿Qué aprendí con esta experiencia?

Comprendí cómo definir estructuras en C++ para representar información ordenada.

Aprendí a trabajar con archivos (ofstream) para guardar información externa desde un programa.

Pude mapear la información académica (pensum) en estructuras de datos programables.

¿Qué dificultades encontré?

Limitar los campos a char[7] y char[20] obligó a abreviar ciertos nombres de asignaturas.

Algunos nombres eran más largos de 20 caracteres y hubo que ajustarlos manualmente para que encajen en el tamaño definido.

