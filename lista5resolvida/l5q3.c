#include <stdio.h>
#include <stdlib.h>
//Questao 3 do exercicio do dia 29/08 da disciplina 288S

int main()
{
   int v1,v2;
   scanf("%i %i",&v1,&v2);
   if(v1==v2){
    printf("Numeros iguais");
   }else{
   if(v1>v2){
    printf("Primeiro e maior");
   }else{
   printf("Segundo e maior");
    }
   }
   return 0;
}
