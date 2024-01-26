#include <stdio.h>
#include <cmath>

int main() {
    float ladoA, ladoB, ladoC,P,areaTriangulo;
    printf("Ingrese la longitud del lado A del triangulo: ");
    scanf("%f", &ladoA);
    printf("Ingrese la longitud del lado B del triangulo: ");
    scanf("%f", &ladoB);
    printf("Ingrese la longitud del lado C del triangulo: ");
    scanf("%f", &ladoC);
    P = (ladoA + ladoB + ladoC) / 2; 
    areaTriangulo = sqrt(P * (P - ladoA) * (P - ladoB) * (P - ladoC));
    printf("Semiperimetro del triangulo: %.2f\n", P);
    printf("area del triangulo: %.9f\n", areaTriangulo);
    return 0;
}
