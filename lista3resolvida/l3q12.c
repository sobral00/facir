#include <stdio.h>
#include <stdlib.h>

/*12)	Ler a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e
/escrever o total (total = quantidade adquirida * preço unitário), o desconto e o total a pagar
/(total a pagar = total - desconto), sabendo-se que:
/-	Se quantidade <= 5 o desconto será de 2%
/- 	Se quantidade > 5 e quantidade <=10 o desconto será de 3%
/-	Se quantidade > 10 o desconto será de 5%
*/

int main()
{

    char nome[15];
    float pu,t,tp;
    int qa;

    printf("Insira o nome do produto: \n");
    scanf("%s",nome);
    printf("Insira o preco e a quantidade adquirida: \n");
    scanf("%f %i",&pu,&qa);
    t=qa*pu;
    if (qa<=5)
    {
        tp=t-t*0.02;
        printf("Produto: %s.\nQuantidade: %i.\n",nome,qa);
        printf("O total foi de %.2f reais,mas,voce teve um desconto de 2%%, o preco final sera de %.2f reais. \n",t,tp);
    }else{
    if (qa>10)
    {
        tp=t-t*0.05;
        printf("Produto: %s.\nQuantidade: %i.\n",nome,qa);
        printf("O total foi de %.2f reais, mas,voce teve um desconto de 5%%, o preco final sera de %.2f reais. \n",t,tp);
    }else{
        tp=t-t*0.03;
        printf("Produto: %s.\nQuantidade: %i.\n",nome,qa);
        printf("O total foi de %.2f reais, mas,voce teve um desconto de 3%%, o preco final sera de %.2f reais. \n",t,tp);
    }

}
system("pause");
return 0;
}
