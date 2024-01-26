#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Definir el struct Libro
struct Libro {
    string titulo;
    string autor;
    int anoPublicacion;
};
int main() {
    // Crear un vector de estructuras Libro
    vector<Libro> libros;
    // Pedir al usuario que ingrese información para varios libros
    cout << "Ingrese informacion para varios libros o vacio para continuar" << endl;
    while (true) {
        Libro libro;
        cout << "Titulo del libro: ";
        // Leer la línea completa con getline
        getline(cin, libro.titulo);
        // Verificar si el titulo del libro esta vacio
        if (libro.titulo.empty()) {
            break;
        }
        cout << "Autor del libro: ";
        getline(cin, libro.autor);
        cout << "Anio de publicacion del libro: ";
        cin >> libro.anoPublicacion;
        // Agregar el libro al vector
        libros.push_back(libro);
        // Limpiar el buffer de entrada después de leer el año de publicación
        cin.ignore();
    }
    // Mostrar la información de todos los libros
    cout << "\nInformacion de todos los libros:" << endl;
    for (const Libro& libro : libros) {
        cout << "Titulo: " << libro.titulo << endl;
        cout << "Autor: " << libro.autor << endl;
        cout << "Anio de publicacion: " << libro.anoPublicacion << endl << endl;
    }
    return 0;
}
