#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    float raio, area, volume;

    printf("Valor do raio: ");
    scanf("%f", &raio);

    volume = (4/3.0) * PI * pow(raio, 3);
    area = 4 * PI * pow(raio, 2);

    printf("Area da superficie: %f\n Volume: %f", area, volume);

    return 1;
}