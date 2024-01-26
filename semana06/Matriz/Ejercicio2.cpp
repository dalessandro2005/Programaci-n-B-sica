#include <iostream>

using namespace std;

int main() {
    // Definir el tamaño de las matrices 
    const int filas1 = 3;
    // El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz
    const int columnas1 = 2;  
    const int filas2 = 2;
    const int columnas2 = 3;

    // Crear dos matrices
    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    // Ingresar valores para la primera matriz
    cout << "Ingrese valores para la primera matriz:" << endl;
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas1; ++j) {
            cout << "Matriz1[" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // Ingresar valores para la segunda matriz
    cout << "Ingrese valores para la segunda matriz:" << endl;
    for (int i = 0; i < filas2; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            cout << "Matriz2[" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Verificar si las matrices se pueden multiplicar
    if (columnas1 != filas2) {
        cout << "No se pueden multiplicar las matrices. El número de columnas de la primera matriz no es igual al número de filas de la segunda matriz." << endl;
        return 1; // Salir del programa con un código de error
    }

    // Multiplicar ambas matrices
    int matrizResultado[filas1][columnas2];
    for (int i = 0; i < filas1; ++i) {        
        for (int j = 0; j < columnas2; ++j) {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < columnas1; ++k) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    //Mostrar Matriz 1
    cout << "Matriz 1" << endl;
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas1; ++j) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }
    //Mostrar Matriz 2
    cout << "Matriz 2" << endl;
    for (int i = 0; i < filas2; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
    // Mostrar la matriz resultante
    cout << "Matriz resultante (multiplicación de ambas matrices):" << endl;
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
