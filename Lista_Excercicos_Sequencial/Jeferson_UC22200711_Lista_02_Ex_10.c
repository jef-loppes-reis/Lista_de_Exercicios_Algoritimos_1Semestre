#include <stdio.h>
#include <math.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    int x1, x2, y1, y2;
    float distancia;

    printf("Informe as codernadas do P1, x1 e y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Informe as codernads do P2, x2 e y2: ");
    scanf("%d%d", &x2, &y2);

    distancia = sqrtf( pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("Distancia entre os dois pontos: %0.4f", sqrtf( pow(x2-x1, 2) + pow(y2-y1, 2)));

    return 1;
}