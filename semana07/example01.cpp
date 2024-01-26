#include <iostream>
using namespace std;


void duplicarPorReferencia(int &numero) {
    numero = numero * 2;
   cout << "Dentro de la funcion duplicarPorReferencia: " << numero << endl;
}

int main() {
    
    int miNumero = 5;

    cout << "Antes de llamar a la funcion: " << miNumero << endl;

    
    duplicarPorReferencia(miNumero);

    cout << "Despues de llamar a la funcion: " << miNumero << endl;

    return 0;
}