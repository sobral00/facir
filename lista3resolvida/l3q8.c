#include <stdio.h>>
#include <stdlib.h>

/*8)Ler 3 valores (A, B e C) representando as medidas dos lados de um tri�ngulo e escrever se
/formam ou n�o um tri�ngulo. OBS: para formar um tri�ngulo, o valor de cada lado deve ser
/menor que a soma dos outros 2 lados.
*/

int main()
{
    int a,b,c;

    printf("Digite 3 numeros: \n");
    scanf("%i %i %i",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b)
    {
        printf("Os numeros formam um triangulo!\n");
    }else{
    printf("Os numeros nao formam um triangulo!\n");
    }

    system("pause");
    return 0;
}
