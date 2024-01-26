#include <iostream>
using namespace std;

void sumar10(float &valor) {
    valor = valor + 10.0;
    cout << "Dentro de la funcion sumar 10: " << valor << endl;
}
int main() {
    float miValor = 25.5;

    cout << "Antes de llamar a la funcion: " << miValor << endl;

    sumar10(miValor);

    cout << "Despues de llamar a la funcion: " << miValor << endl;

    return 0;
}