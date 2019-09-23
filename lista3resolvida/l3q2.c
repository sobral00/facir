#include <stdio.h>
#include <stdlib.h>

/*2)Ler número da conta do cliente, saldo, débito e crédito. Após, calcular e escrever o saldo atual
/(saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior ou igual a zero
/escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.
*/

int main()
{
    float s,d,c,sa;
    int nc;

    printf("Insira numero da conta: \n");
    scanf("%i",&nc);
    printf("Insira seu saldo: \n");
    scanf("%f",&s);
    printf("Insira seu debito: \n");
    scanf("%f",&d);
    printf("Insira seu credito: \n");
    scanf("%f",&c);

    sa=s-d+c;

    if(sa<0){
        printf("Saldo atual: %.2f.\nSaldo negativo.\n",sa);
    }else{
        printf("Saldo atual: %.2f.\nSaldo positivo.\n",sa);
    }
    system("pause");
    return 0;

}
