#include <iostream>
using namespace std;

void incrementar(float valor) {
    valor = valor + 1.5;
    cout << "Dentro de la funcion incrementar: " << valor << endl;
}

int main() {
    
    float miValor = 7.0;

    cout << "Antes de llamar a la funcion: " << miValor << endl;

  
    incrementar(miValor);

    cout << "Despues de llamar a la funcion: " << miValor << endl;

    return 0;
}