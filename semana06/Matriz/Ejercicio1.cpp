#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Definir el tamaño de las matrices 
    const int filas = 3;
    const int columnas = 3;
    // Crear dos matrices
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];    
    // Ingresar valores para la primera matriz
    cout << "Ingrese valores para la primera matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Matriz1[" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }
    // Ingresar valores para la segunda matriz
    cout << "Ingrese valores para la segunda matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Matriz2[" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }
    // Sumar ambas matrices
    int matrizSuma[filas][columnas];
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    //Mostrar Matriz 1
    cout << "Matriz 1" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }
    //Mostrar Matriz 2
    cout << "Matriz 2" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
    // Mostrar la matriz resultante
    cout << "Matriz resultante (suma de ambas matrices):" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matrizSuma[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
