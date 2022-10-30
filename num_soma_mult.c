#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[3], soma, multiplicacao;


    printf( "Digite o primeiro valor: ");
    scanf("%d", &num[0]);

    printf( "Digite o segundo valor: ");
    scanf("%d", &num[1]);

    printf( "Digite o terceiro valor: ") ;
    scanf("%d", &num[2]);

    printf( "Digite o quarto valor: ");
    scanf("%d", &num[3]);   
 
    soma = (num[0] + num[1]) + (num[0] + num[2]) + (num[0] + num[3]) + (num[1] + num[2]) + (num[1] + num[3]) + (num[2] + num[3]);

    multiplicacao = (num[0] * num[1]) + (num[0] * num[2]) + (num[0] * num[3]) + (num[1] * num[2]) + (num[1] * num[3]) + (num[2] * num[3]);

    printf("O valor da multiplicao de todos os numeros eh %d e a soma de todos eh %d", multiplicacao, soma);

    return 0;

}