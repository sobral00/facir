#include <stdio.h>
#include <stdlib.h>

/*3)Ler quantidade atual em estoque, quantidade máxima em estoque e quantidade mínima em
/estoque de um produto. Calcular e escrever a quantidade média ((quantidade média =
/quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual
/a quantidade média escrever a mensagem 'Não efetuar compra', senão escrever a mensagem 'Efetuar compra'.
*/

int main()
{
    float qa,qm,qn,qd;


    printf("Insira quantidade atual do estoque: \n");
    scanf("%f",&qa);
    printf("Insira quantidade maxima do estoque: \n");
    scanf("%f",&qm);
    printf("Insira quantidade minima do estoque: \n");
    scanf("%f",&qn);

    qd=(qm+qn)/2;

    if(qa>=qd){
        printf("Nao efetuar compra.\n\n");
    }else{
        printf("Efetuar compra.\n\n");
    }
    system("pause");
    return 0;

}
