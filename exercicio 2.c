/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main(){
  int maior, menor, num;
  
  printf("Digite o primeiro número: ");
  scanf("%d", &num);
  maior = num;
  menor = num;
  
  printf("Digite o segundo número: ");
  scanf("%d", &num);
  if (num>maior){
     maior = num;
  }
  if (num<menor){
     menor = num; 
  }
  
  printf("Digite o terceiro número: ");
  scanf("%d", &num);
  if (num>maior){
     maior = num;
  }
  if (num<menor){
     menor = num; 
  }
  
  printf("Digite o quarto número: ");
  scanf("%d", &num);
  if (num>maior){
     maior = num;
  }
  if (num<menor){
     menor = num; 
  }
  
  printf("Digite o quinto número: ");
  scanf("%d", &num);
  if (num>maior){
     maior = num;
  }
  if (num<menor){
     menor = num; 
  }
  
  printf("O maior valor é %d e o menor valor é %d.", maior, menor);
  
}
  
  