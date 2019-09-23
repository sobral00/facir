#include <stdio.h>
#include <stdlib.h>
//Questao 9 do exercicio do dia 29/08 da disciplina 288S

int main()
{
    int v1,v2,r;
    v1 = 8;
    v2 = 1;

    while(v2 <= 10){
    r = v1 * v2;
    printf("%i * %i = %i\n",v1,v2,r);
    v2++;
    }

    return 0;

}
