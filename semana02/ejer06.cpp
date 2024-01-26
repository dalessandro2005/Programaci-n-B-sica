#include <stdio.h>
#include <cmath>

int main() {
    float ladoA, ladoB, ladoC, radio,areaTriangulo;
    printf("Ingrese la longitud del lado A del triangulo: ");
    scanf("%f", &ladoA);
    printf("Ingrese la longitud del lado B del triangulo: ");
    scanf("%f", &ladoB);
    printf("Ingrese la longitud del lado C del triangulo: ");
    scanf("%f", &ladoC);
    printf("Ingrese el radio del circulo : ");
    scanf("%f", &radio);
    areaTriangulo = (ladoA * ladoB * ladoC)/(4 * radio);
    printf("Área del triangulo inscrito: %.2f\n", areaTriangulo);

    return 0;
}
