#include <stdio.h>
#include <math.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    float salarioFixo, vendasTotais;
    char nome;

    printf("\nNome do vendedor: ");
    scanf("%s", &nome);

    printf("\nSalario fixo: ");
    scanf("%f", &salarioFixo);

    printf("\nVendas totais: ");
    scanf("%f", &vendasTotais);

    printf("\nValor a receber: %0.2f", salarioFixo + (vendasTotais * 0.15));

    return 1;
}