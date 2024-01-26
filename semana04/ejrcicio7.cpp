#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vectorOriginal;
    int n;

    // Solicitar al usuario ingresar el tamaño del vector
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    // Solicitar al usuario ingresar los elementos del vector
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; ++i) {
        int elemento;
        cin >> elemento;
        vectorOriginal.push_back(elemento);
    }

    // Ordenar el vector para facilitar la eliminación de duplicados
    sort(vectorOriginal.begin(), vectorOriginal.end());

    // Eliminar duplicados usando un bucle for, break y continue
    vector<int> vectorSinDuplicados;
    for (int i = 0; i < vectorOriginal.size(); ++i) {
        // Verificar si el elemento actual es igual al siguiente
        if (i < vectorOriginal.size() - 1 && vectorOriginal[i] == vectorOriginal[i + 1]) {
            // Si es un duplicado, continuar al siguiente elemento
            continue;
        }

        // Si no es un duplicado, agregarlo al nuevo vector
        vectorSinDuplicados.push_back(vectorOriginal[i]);
    }

    // Mostrar el vector original y el vector sin duplicados
    cout << "\nVector Original: ";
    for (int elemento : vectorOriginal) {
        cout << elemento << " ";
    }

    cout << "\nVector sin Duplicados: ";
    for (int elemento : vectorSinDuplicados) {
        cout << elemento << " ";
    }

    return 0;
}
