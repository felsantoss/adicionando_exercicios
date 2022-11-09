// faça um programa que leia a idade de uma expressa em anos, meses e dias e escreva a idade dessa pessoa expressa APENAS EM DIAS. 

#include <stdio.h>
#include <stdlib.h> 

int main()
{

    char nome[16];
    int ano, meses, dias;

    printf( "Qual o seu nome? ");
    scanf("%s", nome); // ao usar o fgets ele quebra a linha no terminal, não consigo usar a biblioteca (stdio_ext.h) para corrigir o problema. 

    printf( "Qual a sua idade? ");
    scanf("%d", &ano);    

    meses = ano * 12;

    dias = ano * 365;

    printf("%s sua idade em meses eh %d e sua idade apenas em dias eh %d.", nome, meses, dias);
    
    return 0;
}