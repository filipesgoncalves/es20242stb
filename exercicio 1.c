/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main(){
    int idade;
    char nome[30];
    
    printf("Digite seu nome:\n ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf ("%d", &idade);
    
    printf("Olá, %s. Falta(m) %d anos para chegar aos 100. \n",nome,(100-idade));

    return 0;
}