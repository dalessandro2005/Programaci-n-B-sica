#include <iostream>
using namespace std;
void cuadradoPorReferencia(double &numero) {
    numero = numero * numero;
    cout << "Dentro de la funcion cuadradoPorReferencia: " << numero << endl;
}

int main() {

    double miNumero = 4.5;

   cout << "Antes de llamar a la funcion: " << miNumero << endl;

    cuadradoPorReferencia(miNumero);

    cout << "Despues de llamar a la funcion: " << miNumero << endl;

    return 0;
}