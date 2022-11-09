// calcular e apresentar o valor do volume de uma lata de óleo.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int volume, raio, altura;

    printf( "Qual o raio da lata de oleo? (em cm): ");
    scanf("%d", &raio);

    printf( "E qual a altura da lata? ");
    scanf("%d", &altura);

    volume = 3.14159 * (raio * raio) * altura;

    printf( "O volume da lata eh %d litros.", volume);

    return 0;
}