#include <iostream>
#include <string>

using namespace std;

int main() {
    string mensaje;
    int clave;

    // Solicitar al usuario ingresar una cadena y una clave
    cout << "Ingrese una cadena: ";
    getline(cin, mensaje);

    cout << "Ingrese la clave del cifrado: ";
    cin >> clave;

    // Cifrar el mensaje usando el cifrado César
    for (char& caracter : mensaje) {
        // Verificar si el caracter es una letra
        if (isalpha(caracter)) {
            // Obtener el límite superior e inferior según si es mayúscula o minúscula
            char limiteSuperior = isupper(caracter) ? 'Z' : 'z';
            char limiteInferior = isupper(caracter) ? 'A' : 'a';

            // Aplicar el cifrado César
            caracter = limiteInferior + (caracter - limiteInferior + clave) % 26;
        }
    }

    // Mostrar el resultado
    cout << "Mensaje cifrado: " << mensaje << endl;

    return 0;
}
