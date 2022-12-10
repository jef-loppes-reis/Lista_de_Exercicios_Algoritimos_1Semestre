#include <stdio.h>
#include <string.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    char primeiroNome[50], meioNome[50], finalNome[50], somaString;

    printf("Digite o primeiro nome: ");
    scanf("%s", &primeiroNome);

    printf("Digite o segundo nome: ");
    scanf("%s", &meioNome);

    printf("Digite o terceiro nome: ");
    scanf("%s", &finalNome);

    strcat(primeiroNome, meioNome);
    strcat(meioNome, finalNome);

    puts(primeiroNome);
}