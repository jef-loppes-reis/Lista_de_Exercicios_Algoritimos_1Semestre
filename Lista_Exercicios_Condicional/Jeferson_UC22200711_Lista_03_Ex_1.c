#include<stdio.h>>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    int numero1, numero2;

    printf("Digite o primeiro numero e o segundo numero: ");
    scanf("%i", numero1, numero2);

    if (numero1 > numero2)

        printf("O Numero_1 e maior !");

    else printf("O Numero_2 e maior !");
    
    return 0;
}