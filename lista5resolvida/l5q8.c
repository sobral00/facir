#include <stdio.h>
#include <stdlib.h>
//Questao 8 do exercicio do dia 29/08 da disciplina 288S

int main()
{
  float v1,v2,r; //r-resultado
  scanf("%f %f",&v1,&v2);
  while(v2==0){
  scanf("%f",&v2);
  }
  r=v1/v2;
  printf("Resultado = %.2f",r);

 return 0;

}
