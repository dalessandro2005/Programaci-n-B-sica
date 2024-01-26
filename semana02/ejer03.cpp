#include <stdio.h>
#include <cmath>

int main() {
    float diagonalMayor, diagonalMenor;
	float area, perimetro,lado;
    printf("Ingrese la diagonal mayor del rombo: ");
    scanf("%f", &diagonalMayor);
    printf("Ingrese la diagonal menor del rombo: ");
    scanf("%f", &diagonalMenor);
    area = (diagonalMayor * diagonalMenor) / 2;
    lado = sqrt((diagonalMayor / 2) * (diagonalMayor / 2) + (diagonalMenor / 2) * (diagonalMenor / 2));
    perimetro = 4 * lado;
    printf("Área del rombo: %.2f\n", area);
    printf("Perímetro del rombo: %.2f\n", perimetro);
    printf("Longitud del lado del rombo: %.2f\n", lado);
    return 0;
}
