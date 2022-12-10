#include <stdio.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    int a, b, c, d, prod_dif;

    printf("Digite o valor de A, B, C e D: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    prod_dif = (a * b) - (c * d);

    printf("%d * %d - %d * %d", a, b, c, d);
    printf("Valor da DIFERENCA = %d ", prod_dif);
}