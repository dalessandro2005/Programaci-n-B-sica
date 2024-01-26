#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Definir el tamaño de la matriz (por ejemplo, 3x3)
    const int filas = 3;
    const int columnas = 3;

    // Crear una matriz de strings
    vector<vector<string>> matriz(filas, vector<string>(columnas));

    // Ingresar palabras para cada celda de la matriz
    cout << "Ingrese varias palabras para cada celda de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Concatenar palabras de cada fila en una única cadena y mostrar los resultados
    string oracion;
    cout << "Cadenas resultantes por fila:" << endl;
    for (int i = 0; i < filas; ++i) {
        string filaConcatenada;
        for (const string& palabra : matriz[i]) {
            filaConcatenada += palabra + " ";
        }
        cout << "Fila " << i << ": " << filaConcatenada << endl;
        oracion += filaConcatenada + " ";
    }
    //imprimir todas las filas contatenadas en una sola oracion
    cout<<"la oracion en una fila es "<<endl;
    cout<<oracion<<endl;
    return 0;
}
