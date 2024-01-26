#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> palabras;
    // Pide al usuario ingresar palabras hasta que ingrese una palabra vacía para terminar
    cout << "Ingrese palabras (ingrese una palabra vacia para terminar):" << endl;
    string palabra;
    do
    {
        //ingresamos cada palabra
        getline(cin, palabra);
        if (!palabra.empty())
        {
            palabras.push_back(palabra);
        }
    } while (!palabra.empty());
    // Concatena todas las palabras en una única cadena
    string Oracion;
    for (const string &palabra : palabras)
    {
        Oracion += palabra + " ";
    }
    // Muestra el resultado
    cout << "Cadena resultante:" << endl;
    cout << Oracion << endl;
    return 0;
}
