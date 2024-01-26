#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Pedir al usuario que ingrese los valores del vector
    vector<int> vector;
    // declaramos una variable para la cantidad, y controlamos que ingrese minimo 2
    // para la cantidad de elementos
    int N;
    do
    {
        cout << "ingrese la cantidad de elementos del vector" << endl;
        cin >> N;
    } while (N < 2);
    // ingresamos los elementos
    for (int i = 0; i < N; i++)
    {
        int valor;
        cout << "Ingrese un número entero ";
        cin >> valor;
        vector.push_back(valor);
    }

    // Ordenar el vector de manera ascendente
    int num;
    for (int i = 0; i < N - 1; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            // Si el elemento actual es mayor que el siguiente, intercámbialos
            if (vector[i] > vector[j + 1])
            {
                num = vector[i];
                vector[i] = vector[j];
                vector[j] = num;
            }
        }
    }

    // Mostrar el vector ordenado
    cout << "El vector ordenado es: ";
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}