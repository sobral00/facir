#include <stdio.h>>
#include <stdlib.h>

//7)Ler 3 valores (considere que n�o ser�o informados valores iguais) e escrev�-los em ordem crescente.

int main()
{
    int a,b,c;

    printf("Digite 3 valores: \n");
    scanf("%i %i %i",&a,&b,&c);
    while(a==b,b==c,a==c)
    {
        printf("Os numeros nao podem ser iguais.\n");
        printf("Digite 3 valores: \n");
        scanf("%i %i %i",&a,&b,&c);
    }
    if(a<b && b<c)
    {
        printf("%i,%i,%i.\n",a,b,c);
    }else{
    if(a<b && b>c && a<c)
    {
        printf("%i,%i,%i.\n",a,c,b);
    }else{
    if(a<b && b>c && a>c)
    {
        printf("%i,%i,%i.\n",c,a,b);
    }else{
    if(a>b && b>c)
    {
        printf("%i,%i,%i.\n",c,b,a);
    }else{
    if(a>b && b<c && a>c)
    {
        printf("%i,%i,%i.\n",b,c,a);
    }else{
        printf("%i,%i,%i.\n",b,a,c);
    }
    }
    }
    }
    }

system("pause");
return 0;
}
