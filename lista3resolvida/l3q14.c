#include <stdio.h>
#include <stdlib.h>

/*14)Ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja,
/para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do
/primeiro valor lido pelo segundo valor lido. (utilizar a estrutura REPETIR)
*/

int main()
{
    float n1,n2,r;

    printf("Insira dois numeros para divisao: \n");
    scanf("%f%f",&n1,&n2);
    while(n2==0)
    {
        system("cls");
        printf("O divisor nao pode ser igual a 0.\n");
        printf("Insira um novo divisor para %.1f. \n",n1);
        scanf("%f",&n2);
    }
    r=n1/n2;

    printf("%.1f / %.1f = %.1f\n",n1,n2,r);
    system("pause");
    return 0;
}
