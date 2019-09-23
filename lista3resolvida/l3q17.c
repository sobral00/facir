#include <stdio.h>
#include <stdlib.h>

//17)Ler um valor N e escreva todos os valores inteiros entre 1 (inclusive) e N (inclusive).
//Considere que o N será sempre maior que ZERO.

int main()
{
    int n,x=1;

    printf("Insira um numero: \n");
    scanf("%d",&n);
    while(n==0)
    {
        system("cls");
        printf("O numero nao pode ser igual a zero.\n");
        printf("Insira um numero: \n");
        scanf("%d",&n);
    }
     while(x<=n)
    {
        printf("%d\n",x);
        x++;
    }
    return 0;
}

