#include <stdio.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    char nomeCompleto[60], email[100], endereco[100], nomeCompletoBackup, emailBackup, enderecoBackup;

    printf("Nome completo: ");
    scanf("%s", &nomeCompleto);

    printf("Email: ");
    scanf("%s", &email);

    printf("Endereco: ");
    scanf("%s", &endereco);

    nomeCompletoBackup = nomeCompleto;
    enderecoBackup = nomeCompleto;
    emailBackup = email;
}