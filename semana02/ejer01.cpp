#include <stdio.h>
#include <cmath>
int main(){
float lado,area,perimetro,diagonal;
printf("Ingresa la longitud del lado del cuadrado: ");
scanf("%f" , &lado);
area = lado * lado;
perimetro = 4 * lado;
diagonal = lado * sqrt(2);
printf("Área del cuadrado:  %.f\n" , area);
printf("Perímetro del cuadrado:  %.f\n" , perimetro);
printf("Diagonal del cuadrado:  %.4f\n" , diagonal);
return 0;
}
