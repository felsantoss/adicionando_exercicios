#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float estoque_minimo, estoque_maximo, media;

    printf( "Informe o valor minimo do estoque: " );
    scanf("%f", &estoque_minimo);

    printf( "\nInforme o valor maximo do estoque: ");
    scanf("%f", &estoque_maximo);

    media = ( estoque_minimo + estoque_maximo )/2;

    printf( "\nA media do estoque eh %.2f", media);

    return 0;

}
