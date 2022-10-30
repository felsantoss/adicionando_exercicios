#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float lado, compri, mult;

    printf("Informe o tamanho do comprimento do terreno em metros (m): ");
    scanf("%f", &compri);
    

    printf("Informe o tamanho lado do terreono em metros (m): ");
    scanf("%f", &lado);

    mult = lado * compri;

    printf("A area do terreno e: %1.f metros \n", mult);

    return 0;


}