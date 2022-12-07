#include <stdio.h>
#include <string.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    char nome[50], sobreNome[50], cpf[11], senha;

    printf("\n\nDigite seu nome: ");
    scanf("%s", &nome);

    printf("\nDigite seu sobre nome: ");
    scanf("%s", &sobreNome);

    printf("\nDigite seu CPF: ");
    scanf("%s", &cpf);

    printf("Teste: %s", nome[3]);
}