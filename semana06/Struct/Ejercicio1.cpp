#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Definir el struct Alumno
struct Alumno {
    string nombre;
    int edad;
    double calificacion;
};
int main() {
    // Crear un vector de estructuras Alumno
    vector<Alumno> estudiantes;
    // Pedir al usuario que ingrese información para varios estudiantes
    cout << "Ingrese informacion para varios estudiantes o nombre vacio para continnuar" << endl;
    while (true) {
        Alumno estudiante;
        cout << "Nombre del estudiante: ";
        getline(cin, estudiante.nombre);
        // Verificar si el usuario ingresó " " 
        if (estudiante.nombre.empty()) {
            break;
        }
        cout << "Edad del estudiante: ";
        cin >> estudiante.edad;
        cout << "Calificacion del estudiante: ";
        cin >> estudiante.calificacion;
        // Agregar el estudiante al vector
        estudiantes.push_back(estudiante);
        cin.ignore();
    }
    // Mostrar la información de todos los estudiantes
    cout << "\nInformación de todos los estudiantes:" << endl;
    for (const Alumno& estudiante : estudiantes) {
        cout << "Nombre: " << estudiante.nombre << endl;
        cout << "Edad: " << estudiante.edad << endl;
        cout << "Calificacion: " << estudiante.calificacion << endl << endl;
    }
    return 0;
}
