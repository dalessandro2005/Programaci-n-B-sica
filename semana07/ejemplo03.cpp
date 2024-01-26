#include <iostream>
using namespace std;
void cuadrado(int numero) {
    numero = numero * numero;
   cout << "Dentro de la funcion cuadrado: " << numero << endl;
}

int main() {

    int miNumero = 8;

    cout << "Antes de llamar a la funcion: " << miNumero << endl;

   
    cuadrado(miNumero);

 cout << "Despues de llamar a la funcion: " << miNumero << endl;

    return 0;
}