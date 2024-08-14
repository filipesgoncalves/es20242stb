/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
float num1, num2, num3, num4, final;
char choice;

printf("Escolha a forma de media:\nA - Aritmetica\nP - Ponderada\nH - Harmonica\n");
scanf("%c", &choice);

printf("Digite o primeiro valor: ");
scanf("%f", &num1);

printf("Digite o segundo valor: ");
scanf("%f", &num2);

printf("Digite o terceiro valor: ");
scanf("%f", &num3);

printf("Digite o quarto valor: ");
scanf("%f", &num4);

if (choice=='A'){
    final = (num1+num2+num3+num4)/4;
}
if (choice=='P'){
    final = (num1*2+num2*3+num3*5+num4*10)/20;
}
if (choice=='H'){
    final = 4/((1/num1)+(1/num2)+(1/num3)+(1/num4));
}
printf("A media %c com os numeros %.2f, %.2f, %.2f e %.2f é %.2f", choice, num1, num2, num3, num4, final);

    return 0;
}