#include <stdio.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    char cor[10];

    // do
    // {
    //     printf("Digite a cor, Branco, Verde ou Amarelo: ");
    //     scanf("%s", &cor);

    // } while (toupper(cor) == 'BRANCO' || toupper(cor) == 'VERDE' || toupper(cor) == 'AMARELO');

    // printf("Cor valida !");

    while (toupper(cor) != 'BRANCO' || toupper(cor) != 'VERDE' || toupper(cor) != 'VERMELHA')
    {
        printf("Digite a cor, Branco, Verde ou Amarelo: ");
        scanf("%s", &cor);
        system("cls");
        printf("Nome de cor invalida :(\nDigite novamente !\n\n");
    }
    printf("Nome de cor valida :)");
}