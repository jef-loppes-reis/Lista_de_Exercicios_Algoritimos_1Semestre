#include <stdio.h>

int main(){


    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    int a, b, x;

    printf("Digite o valor de A e B: \n");
    scanf("%d%d", &a, &b);

    x = a + b;

    printf("\n%d + %d = %d", a,b,x);

    return 1;
}