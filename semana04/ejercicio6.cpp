#include <iostream>
#include <string>
#include <cctype>  // Necesario para toupper

using namespace std;

int main() {
    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;

    // Pregunta 1
    cout << "Pregunta 1: ¿Cual es la capital de Francia?" << endl;
    string respuesta1;
    cout << "Tu respuesta: ";
    getline(cin, respuesta1);
	
	respuesta1[0] = toupper(respuesta1[0]);
    if (respuesta1 == "Paris") {
        cout << "Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Incorrecto. La respuesta correcta es Paris." << endl;
        respuestasIncorrectas++;
    }

    // Pregunta 2
    cout << "Pregunta 2: ¿Cuantos lados tiene un triangulo?" << endl;
    int respuesta2;
    cout << "Tu respuesta: ";
    cin >> respuesta2;

    if (respuesta2 == 3) {
        cout << "Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Incorrecto. Un triángulo tiene 3 lados." << endl;
        respuestasIncorrectas++;
    }

    // Mostrar resultados
    cout << "\nResultados:" << endl;
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;

    return 0;
}
