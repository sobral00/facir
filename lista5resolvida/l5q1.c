#include <stdio.h>
#include <stdlib.h>
//Questao 1 do exercicio do dia 29/08 da disciplina 288S

int main()
{
    int valor;
    scanf("%i",&valor);
    if(valor>0){
        printf("Positivo");
    }else{
        if(valor==0){
            printf("Zero");
        }else{
        printf("Negativo");
        }
    }
    return 0;
}
