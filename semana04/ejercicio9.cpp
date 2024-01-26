#include <iostream>
#include <vector>

using namespace std;

int main() {
    int inicio, fin;

    // Solicitar al usuario ingresar los números de inicio y fin
    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;

    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    // Verificar que el rango sea válido
    if (inicio > fin) {
        cout << "Error: El numero de inicio debe ser menor o igual al numero de fin." << endl;
        return 1;  // Salir del programa con código de error
    }

    // Generar un vector con los números primos en el rango
    vector<int> primos;

    for (int numero = inicio; numero <= fin; ++numero) {
        if (numero < 2) {
            // 0 y 1 no son primos, continuar al siguiente número
            continue;
        }

        bool esPrimo = true;
        for (int i = 2; i * i <= numero; ++i) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            // Si es primo, agregarlo al vector
            primos.push_back(numero);
        }
    }

    // Mostrar los números primos en el rango
    cout << "Numeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }

    return 0;
}
