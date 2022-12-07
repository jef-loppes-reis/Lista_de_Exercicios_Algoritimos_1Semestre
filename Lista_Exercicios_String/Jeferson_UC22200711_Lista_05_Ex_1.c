#include <stdio.h>


//Funcao para contar caracteres.
int strlen(char *str){
int total=0;

while( str[total] != '\0')
    total++;

return total;
}

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    char nomeCliente[50];

    system("cls");
    printf("Nome do cliente: ");
    scanf("%s", &nomeCliente);
    printf("Quantidade de chars: %d", strlen(nomeCliente));

}