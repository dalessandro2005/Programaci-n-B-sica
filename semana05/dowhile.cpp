#include <iostream>
using namespace std;

int main() {
    int numero;

do {
cout << "Ingresa un número positivo: ";
 cin >> numero;

if (numero <= 0) {
cout << "Por favor, ingresa un número mayor que 0." << endl;
 }

 } while (numero <= 0);

cout << "¡Gracias! Has ingresado un número positivo." << endl;

return 0;
}