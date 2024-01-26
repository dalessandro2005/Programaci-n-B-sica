#include <iostream>
#include <vector>
using namespace std;
// Definir el struct Estudiante
struct Estudiante {
    string nombre;
    float calificaciones[4]; // Array para las calificaciones
};
int main() {
    // Crear un vector de estructuras Estudiante
    vector<Estudiante> estudiantes;
    // Pedir al usuario que ingrese calificaciones para varios estudiantes
    cout << "Ingrese calificaciones para varios estudiantes o vacio como nombre para terminar" << endl;
    while (true) {
        Estudiante estudiante;
        cout << "Nombre del estudiante: ";
        getline(cin, estudiante.nombre);
        // Verificar si el usuario ingresó " " 
        if (estudiante.nombre.empty()) {
            break;
        }
        cout << "Ingrese 4 calificaciones para el estudiante:" << endl;
        for (int i = 0; i < 4; ++i) {
            cout << "Calificacion " << i + 1 << ": ";
            cin >> estudiante.calificaciones[i];
        }

        // Agregar el estudiante al vector
        estudiantes.push_back(estudiante);
        cin.ignore();
    }
    // Calcular y mostrar el promedio de calificaciones para cada estudiante
    cout << "\nPromedio de calificaciones para cada estudiante:" << endl;
    for (const Estudiante& estudiante : estudiantes) {
        float sumaCalificaciones = 0;
        for (int i = 0; i < 4; ++i) {
            sumaCalificaciones += estudiante.calificaciones[i];
        }
        float promedio = sumaCalificaciones/4;

        cout << "Estudiante: " << estudiante.nombre << ", Promedio: " << promedio << endl;
    }
    return 0;
}
