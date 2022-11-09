/*Escreva um programa que leia quatro notas escolares de um aluno e apresentar uma mensagem que o aluno foi
aprovado se o valor da média escolar for maior ou igual a 7. Se o valor da média for menor que 7, solicitar a nota
de recuperação, somar com o valor da média e obter a nova média. Se a nova média for maior ou igual a 7,
apresentar uma mensagem informando que o aluno foi aprovado na recuperação. Se o aluno não foi aprovado,
apresentar uma mensagem informando esta condição. Apresentar junto com as mensagens o valor da média do
aluno.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota[3], media, recup, media_final;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota[0]);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota[1]);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota[2]);

    printf("Informe a quarta nota: ");
    scanf("%f", &nota[3]);

    media = (nota[0] + nota[1] + nota[2] + nota[3])/4;

    if (media >= 7){
            printf("Aluno aprovado com uma media de: %.2f", media);
    }

    else{

        printf("Informe a nota da recuperacao: ");
        scanf("%f", &recup);

    }

        media = (media + recup)/2;
    
    if (media >= 7){    

        printf("Aluno aprovado na recuperacao com uma media final de: %.2f", media);
    }

    else{
        printf("Aluno reprovado com a media de nota: %.2f", media);
    }

    return 0;
    
}