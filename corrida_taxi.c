/* Escreva um programa que informe o valor de uma corrida de taxi.
Para calcular o valor da corrida pe necessário saber a distancia percorrida em quilometros e qual o tipo de bandeira da corrida, 1 ou 2. Caso a bandeira
seja 1, o preço do quilometro percorrido é de R$ 1,80 reais, se a bandeira for 2 o valor é R$ 2,30. 
Escreva um programa que solicite a distancia percorrida em quilometros e qual o tipo da bandeira da corrida e informe o valor da corrida.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int band;
    float kms, valor, valor_corrida;

    printf("Digite o numero da bandeira (1 ou 2): ");
    scanf("%d", &band);

    printf("Digite a distancia percorrida: ");
    scanf("%f", &kms);

    if (band == 1) // definição dos preços/km dependendo da bandeira.
        valor = 1.80;

    if (band == 2)
        valor = 2.30;

    valor_corrida = valor*kms;

    printf("O valor da corrida eh: %.2f\n", valor_corrida);

    return 0;
}