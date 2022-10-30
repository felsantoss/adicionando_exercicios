#include <stdio.h>
#include <locale.h>

int main ()
{
    
    setlocale(LC_ALL, "portuguese");

    float volta1, volta2, volta3, resultado1, resultado2, resultado3;

    printf("Informe o tempo da primeira volta: ");
    scanf("%f", &volta1);

    printf("Informe o tempo da segunda volta: ");
    scanf("%f", &volta2);

    printf("Informe o tempo da terceira volta: ");
    scanf("%f", &volta3);

    printf("\nO tempo da primeira volta foi de: %1.f segundos \n \n", volta1);

    printf("O tempo da segunda volta foi de: %1.f segundos \n \n", volta2);

    printf("O tempo da terceira volta foi de: %1.f segundos \n \n", volta3);
    
    
        if (volta1 < volta2)
    
        printf("A melhor volta foi a primeira com o tempo de: %1.f segundos \n \n", volta1);
        
        else
    
        if (volta3 > volta2)

        printf("A melhor volta foi a segunda com o tempo de: %1.f segundos \n\n", volta2);

        else 
        printf("A melhor volta foi a terceira com o tempo de: %1.f segundos \n \n", volta3); 
    
        
        if (volta1 > volta2)
    
        printf("A pior volta foi a primeira com o tempo de: %1.f segundos \n \n", volta1);

        else

        if (volta2 > volta3)

        printf("A pior volta foi a segunda com o tempo de: %1.f segundos \n \n", volta2);

        else

        printf("A pior volta foi a terceira com o tempo de: %1.f segundos \n \n", volta3);

        
        
        resultado1 = volta1 - volta2;

        printf("A diferença entre a primeira e a segunda volta foi de: %1.f segundos \n \n", resultado1);

        resultado2 = volta1 - volta3;

        printf("A diferença entre a primeira e terceira volta foi de: %1.f segundos \n \n", resultado2);

        resultado3 = volta2 - volta3;

        printf("A diferença entre a segunda e a terceira volta foi de: %1.f segundos \n \n", resultado3);

    return 0;

    
}