#include <iostream>

using namespace std;

int main() {
    int n;

    // Solicitar al usuario ingresar un número entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    // Verificar que el número ingresado sea positivo
    if (n <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 1; // Salir del programa con código de error
    }

    // Generar la secuencia de Collatz
    cout << "Secuencia de Collatz para " << n << ": " << endl;
    while (n != 1) {
        cout << n << " ";

        // Aplicar las reglas de la secuencia de Collatz
        if (n % 2 == 0) {
            // Si es par, divídelo por 2
            n /= 2;
        } else {
            // Si es impar, multiplícalo por 3 y suma 1
            n = (3 * n) + 1;
        }
    }

    // Imprimir el último elemento de la secuencia (que es 1)
    cout << n << endl;

    return 0;
}
