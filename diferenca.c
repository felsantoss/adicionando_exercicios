//  Escreva um programa que leia dois números e apresente a diferença do maior para o menor.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1, num2, valor;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    if (num1 > num2){

        valor = num1 - num2;
        printf("A diferenca entre os numeros eh: %d", valor);
           
    }

    if (num2 > num1){

        valor = num2 - num1;

        printf("A diferenca entre os numeros eh: %d", valor);
    }

    return 0;

}