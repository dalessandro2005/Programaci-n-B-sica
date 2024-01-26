#include <stdio.h>
#include <cmath>

int main() {
    float lado1, lado2, base, altura, area,perimetro;
    printf("Ingrese la longitud del lado 1 del triangulo: ");
    scanf("%f", &lado1);
    printf("Ingrese la longitud del lado 2 del triangulo: ");
    scanf("%f", &lado2);
    printf("Ingrese la longitud de la base del triangulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    perimetro = lado1 + lado2 + base;
    printf("Área del triangulo: %.2f\n", area);
    printf("Perímetro del triangulo: %.2f\n", perimetro);
    return 0;
}
