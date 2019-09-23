#include <stdio.h>>
#include <stdlib.h>

/*10)	Ler dois valores e imprimir uma das três mensagens a seguir:
/‘Números iguais’, caso os números sejam iguais;
/‘Primeiro e maior’, caso o primeiro seja maior que o segundo;
/‘Segundo e maior’, caso o segundo seja maior que o primeiro.
*/

int main()
{
    int a,b;

    printf("Insira dois numeros: \n");
    scanf("%i %i",&a,&b);
    if (a == b)
    {
        printf("Numeros iguais.\n");
    }else{
    if(a>b)
    {
        printf("O primeiro e maior.\n");
    }else{
        printf("O segundo e maior.\n");
    }
    }
    system("pause");
    return 0;
}
