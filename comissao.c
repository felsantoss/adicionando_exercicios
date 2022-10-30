#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char nome [21];
    float valor, quantidade, comissao;

    printf( "Insira o nome do vendedor: ");
    fgets(nome,21,stdin);

    printf( "Qual o valor do item? ");
    scanf("%f", &valor);

    printf( "Qual a quantidade do item vendida? ");
    scanf("%f", &quantidade);

    comissao = ( valor * quantidade ) * 0.05;

    printf("O valor de comissao para o vendedor(a) %s eh %.2f", nome, comissao);

    return 0;
    
}