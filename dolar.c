#include <stdio.h>
#include <stdlib.h>

int main()
{

    float dolar_atual = 5.30;
    float dolar, real;

    printf( "Dolar atual: %.2f \n", dolar_atual );

    printf( "Informe um valor em dolar: ");
    scanf( "%f", &dolar);

    real = dolar * dolar_atual;

    printf( "\n%.2f dolares convertido para reais eh %.2f ", dolar, real);

}