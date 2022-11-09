#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if ( num % 2 == 0)
        printf("O numero %d eh par. ", num);

    else   
        printf("O numero eh %d impar. ", num);

    if (num > 10){
        printf("eh maior que 10. \n");
    }

    else {
        printf("O numero eh menor que 10.");
    }

    return 0;
}