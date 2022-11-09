// Escreva um programa que leia 3 números inteiros e imprima na tela os valores em ordem descrente.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2, n3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d",&n2);

    printf("Digite o terceiro valor: ");
    scanf("%d",&n3);

    if ( n1 > n2 && n1 > n3 && n2 > n3){
        printf("Os numeros em ordem descrente eh %d, %d e %d.", n1, n2, n3);
    }

    if (n2 > n1 && n2 > n3 && n1 > n3){
        printf("Os numeros em ordem descrente eh %d, %d e %d.", n2, n1, n3);
    }

    if (n3 > n2 && n3 > n1 && n2 > n1){
        printf("Os numeros em ordem descrente eh %d, %d e %d.", n3, n2, n1);
    }



    return 0;

}