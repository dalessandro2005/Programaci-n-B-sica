#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;

    // Solicitar al usuario ingresar el tamaño del vector
    int n;
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> n;

    // Solicitar al usuario ingresar los elementos del vector
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; ++i) {
        int elemento;
        cin >> elemento;
        numeros.push_back(elemento);
    }

    // Encontrar el mayor elemento usando un bucle for y break
    int mayorElemento = numeros[0];
    for (int i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayorElemento) {
            mayorElemento = numeros[i];
        }
    }

    // Mostrar el resultado
    cout << "El mayor elemento en el vector es: " << mayorElemento << endl;

    return 0;
}
