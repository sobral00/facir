#include <stdio.h>
#include <stdlib.h>
//Questao 2 do exercicio do dia 29/08 da disciplina 288S

int main()
{
   int valor1,valor2;
   scanf("%i %i",&valor1,&valor2);
   printf("valores %i %i\n",valor1,valor2);
   valor1 = valor1 + valor2;
   valor2 = valor1 - valor2;
   valor1 = valor1 - valor2;
   printf("valores %i %i\n",valor1,valor2);
   return 0;
}
