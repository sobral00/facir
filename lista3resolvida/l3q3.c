#include <stdio.h>
#include <stdlib.h>

/*3)Ler quantidade atual em estoque, quantidade m�xima em estoque e quantidade m�nima em
/estoque de um produto. Calcular e escrever a quantidade m�dia ((quantidade m�dia =
/quantidade m�xima + quantidade m�nima)/2). Se a quantidade em estoque for maior ou igual
/a quantidade m�dia escrever a mensagem 'N�o efetuar compra', sen�o escrever a mensagem 'Efetuar compra'.
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
