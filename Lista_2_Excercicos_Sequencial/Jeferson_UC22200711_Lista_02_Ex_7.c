#include <stdio.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    int a, b, PROD;

    printf("Digite o valor de A e B: \n");
    scanf("%d%d", &a, &b);

    PROD = a * b;

    printf("\nValor de PROD = %d", PROD);

    return 1;
}