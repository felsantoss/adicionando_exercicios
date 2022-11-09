/* Ler dois valores inteiros para as variaveis A e B, efetuar a troca dos valores de modo que a variavel A passe a possuir o valor da variavel B,
e a variavel B passe a possuir o valor da variavel A. Apresentar os valores trocados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &b);


    printf("\nInvertendo os valores, o resultado fica desta maneira:\n");

    printf("O primeiro numero digitado foi %d.\n", b);

    printf("O segundo numero digitado foi %d.", a);

    return 0;
}