#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2;

    printf( "Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf( "Digite o segundo numero: ");
    scanf("%d", &n2);

    
    if ( n1 == n2){
        printf("%d e %d sao iguais. \n", n1, n2);
    }
    else{
        printf("%d e %d sao diferentes. \n", n1, n2);
    }
    
    if ( n1 > n2){
        printf("%d eh maior que %d. \n", n1, n2);
    }
    else{
        printf("%d eh menor que %d. \n", n1, n2);
    }

    if ( n1 >= n2){
        printf("%d eh maior ou igual a %d. \n", n1, n2);
    }
    else{
        printf("%d eh menor ou igual a %d. \n", n1, n2);
    }


    return 0;
}