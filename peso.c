#include <stdio.h>
#include <locale.h>

int main ()
{
    char nome1 [10], nome2 [10], nome3 [10], nome4 [10], nome5 [10];
    float peso1, peso2, peso3, peso4, peso5;

    printf("Informe o nome do primeiro amigo: ");
    scanf("%s", &nome1);
    printf("E qual o peso dele? ");
    scanf("%f", &peso1);

    printf("Informe o nome do segundo amigo: ");
    scanf("%s", &nome2);
    printf("E qual o peso dele? ");
    scanf("%f", &peso2);

    printf("Informe o nome do terceiro amigo: ");
    scanf("%s", &nome3);
    printf("E qual o peso dele? ");
    scanf("%f", &peso3);

    printf("Informe o nome do quarto amigo: ");
    scanf("%s", &nome4);
    printf("E qual o peso dele? ");
    scanf("%f", &peso4);

    printf("Informe o nome do quinto amigo: ");
    scanf("%s", &nome5);
    printf("E qual o peso dele? ");
    scanf("%f", &peso5);

    if (peso1 > peso2)

    printf("O %s é o mais pesado com %1.f kilos", nome1, peso1);

    else
        if (peso2 > peso3)

        printf("O %s é o mais pesado com %1.f kilos", nome2, peso2);

    if (peso3 > peso4)
        printf("O %s é o mais pesado com %1.f kilos", nome3, peso3);

        else
        if (peso4 > peso5)

        printf("O %s é o mais pesado com %1.f kilos", nome4, peso4);


    
}
    
