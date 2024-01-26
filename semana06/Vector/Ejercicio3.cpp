#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<char> caracteres;
    // Pide al usuario ingresar caracteres hasta que ingrese '0' para terminar
    cout << "Ingrese caracteres (ingrese '0' para terminar):" << endl;
    char caracter;
    do
    {
        //ingresamos cada letra
        cin>>caracter;
        caracteres.push_back(caracter);
        
    } while (caracter!= '0');
    // Pide al usuario ingresar el carácter a contar
    char caracterBuscado;
    cout << "Ingrese un carácter para contar su aparición en el vector: ";    
    cin >> caracterBuscado;
    // Cuenta cuántas veces aparece el carácter en el vector
    int contador = 0;
    for (char c : caracteres) {
        if (c == caracterBuscado) {
            contador++;
        }
    }
    cout << "El carácter '" << caracterBuscado << "' aparece " << contador << " veces en el vector." << endl;
    return 0;
}
