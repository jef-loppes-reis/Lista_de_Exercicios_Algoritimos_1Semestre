#include<stdio.h>
#include<math.h>

int main(){

    printf("          Nome Completo: Jeferson Lopes Reis\n");
    printf("          Matricula: UC22200711\n");
    printf("          Curso: Ciencia da Computacao\n\n");

    float numero, numAoQuadrado, numRaizQuadrada, resultado;

    printf("Digite o numero: ");
    scanf("%f", &numero);

    if (numero >= 0){
        numAoQuadrado = pow(numero, 4);
        numRaizQuadrada = sqrt(numero);

        printf("O numero ao quadrado: %.0f", numAoQuadrado);
        printf("\nA raiz quadrada do numero: %.2f", numRaizQuadrada);
    }

    else printf("O numero e negativo, execute novamente !!");
    
    return 0;
}