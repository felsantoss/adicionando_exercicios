#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float c, f;

    printf( "Informe a temperatura em graus celsius: ");
    scanf("%f", &c);

    f = ( 9 * c + 160 )/5;

    printf( "A temperatura convertida para graus Fahrenheit eh %.2f", f);

    return 0;
}