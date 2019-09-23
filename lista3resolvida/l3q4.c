#include <stdio.h>
#include <stdlib.h>

//4)	Ler um valor e escrever se é positivo, negativo ou zero.

int main()
{
    int v;

    printf("Insira um numero: \n");
    scanf("%i",&v);

    if(v==0)
    {
        printf("O valor %i e Zero.\n",v);
    }else{
    if(v>0)
    {
        printf("O valor %i e positivo.\n",v);
    }else{
        printf("O valor %i e negativo.\n",v);
    }
    }
    system("pause");
    return 0;
}
