#include <iostream>
using namespace std;
void duplicar(int numero) {
    numero = numero * 2;
    cout << "Dentro de la funcion duplicar: " << numero << endl;
}

int main() {
    
    int miNumero = 5;

    cout << "Antes de llamar a la funcion: " << miNumero << endl;

    duplicar(miNumero);

  cout << "Despues de llamar a la funcion: " << miNumero << endl;

    return 0;
}