#include <iostream>
#include <cctype> // Necesario para la función tolower

using namespace std;

int main() {
    string oracion;

    // Solicitar al usuario ingresar una oración
    cout << "Ingrese una oracion: ";
    getline(cin, oracion);

    // Inicializar contadores de vocales
    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;

    // Recorrer cada caracter en la oración
    for (char caracter : oracion) {
        // Convertir el caracter a minúscula para hacer la comparación sin distinción entre mayúsculas y minúsculas
        char caracterMinuscula = tolower(caracter);

        // Verificar si el caracter es una vocal
        switch (caracterMinuscula) {
            case 'a':
                contadorA++;
                break;
            case 'e':
                contadorE++;
                break;
            case 'i':
                contadorI++;
                break;
            case 'o':
                contadorO++;
                break;
            case 'u':
                contadorU++;
                break;
            default:
                break;
        }
    }

    // Mostrar los resultados
    cout << "Cantidad de 'a': " << contadorA << endl;
    cout << "Cantidad de 'e': " << contadorE << endl;
    cout << "Cantidad de 'i': " << contadorI << endl;
    cout << "Cantidad de 'o': " << contadorO << endl;
    cout << "Cantidad de 'u': " << contadorU << endl;

    return 0;
}
