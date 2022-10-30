// Quantidade de litros de combustivel gasta em uma viajem, utilizando um veiculo que fala 12km por litro.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float tempo, distancia, velocidade, litros_usados;

    puts("\nPrograma para calcular quantidade de combustivel gasto em uma viajem. \n");
    
    printf( "Informe o tempo gasto na viajem (em minutos): ");
    scanf("%f", &tempo);

    printf( "Informe a velocidade media na viajem: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;

    litros_usados = distancia / 12;

    printf("A velocidade media foi %.2f e o tempo gasto na viajem foi de %.2f minutos.\n", velocidade, tempo);

    printf( "E a distancia porcorrida foi de %.2f gastando um total de %.2f litros de combustivel.", distancia, litros_usados);



    return 0;
}