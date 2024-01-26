#include <stdio.h>
#include <cmath>

int main() {
    
    float longitud, ancho;
	float area,perimetro,diagonal;
    printf("Ingrese la longitud del rectangulo: ");
    scanf("%f", &longitud);

    printf("Ingrese el ancho del rectangulo: ");
    scanf("%f", &ancho);

    
    area = longitud * ancho;
    perimetro = 2 * (longitud + ancho);
    diagonal = sqrt(longitud * longitud + ancho * ancho);

    
    printf("area del rectangulo: %.2f\n", area);
    printf("Perimetro del rectangulo: %.2f\n", perimetro);
    printf("Longitud de la diagonal del rectangulo: %.2f\n", diagonal);

    return 0;
}
