#include <stdio.h>

int main() {
    float baseMayor, baseMenor, altura,area;
    printf("Ingrese la longitud de la base mayor del trapecio: ");
    scanf("%f", &baseMayor);
    printf("Ingrese la longitud de la base menor del trapecio: ");
    scanf("%f", &baseMenor);
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &altura);
    area = ((baseMayor + baseMenor) * altura) / 2;
    printf("Área del trapecio: %.2f\n", area);
    return 0;
}
