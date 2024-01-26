#include <iostream>
#include <string>
#include <cctype> // Necesario para la función tolower

using namespace std;

int main() {
    string palabra;
    // Solicitar al usuario que ingrese una palabra
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    // Convertir la palabra a minúsculas para hacer la comparación sin distinción entre mayúsculas y minúsculas
    for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = tolower(palabra[i]);
    }
    // Verificar si la palabra es un palíndromo
    bool esPalindromo = true;
    for (int i = 0, j = palabra.length() - 1; i < j; i++, j--) {
        if (palabra[i] != palabra[j]) {
            esPalindromo = false;
            break;
        }
    }
    // Mostrar el resultado
    if (esPalindromo) {
        cout << "La palabra es un palindromo. \\\\n hola" ;
    } else {
        cout << "La palabra no es un palindromo." << endl;
    }
    return 0;
}
