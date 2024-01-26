#include <stdio.h>
#include <cmath>

int main() {
    float ladoA, ladoB, ladoC, radio,semiperimetro,areaTriangulo;
    printf("Ingrese la longitud del lado A del triangulo: ");
    scanf("%f", &ladoA);
    printf("Ingrese la longitud del lado B del triangulo: ");
    scanf("%f", &ladoB);
    printf("Ingrese la longitud del lado C del triangulo: ");
    scanf("%f", &ladoC);
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    semiperimetro = (ladoA + ladoB + ladoC) / 2; 
    areaTriangulo = semiperimetro * radio; 
    printf("Semiperimetro del triangulo circunscrito: %.2f\n", semiperimetro);
    printf("area del triangulo circunscrito: %.2f\n", areaTriangulo);
    return 0;
}