#include <stdio.h>
#include <stdlib.h>

int main(){

    float f, c;

    printf( "Informe a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = ( f - 32 )* 5 / 9;

    printf( "A temperatura convertida para graus Celsius eh %.2f", c);

    return 0;

}