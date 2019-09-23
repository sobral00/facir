#include <stdio.h>>
#include <stdlib.h>

// Questao numero 1 do exercicio do dia 16/08/2019 da disciplina 288s

int main()
{
    float sf,vv,vx,tv,st;

    printf("Insira seu salario fixo: \n");
    scanf("%f",&sf);
    printf("Insira o valor de vendas: \n");
    scanf("%f",&vv);
    if(vv>1500){
        vx=vv-1500;
        vv=1500;
        }
    tv=vv+vx;
    if(tv>1500){
        st=sf+(vv*0.03 + vx*0.05);
    }else{
        st=sf+(vv*0.03);
    }
    printf("Seu salario total foi de %.2f reais.\n",st);
    system("pause");

    return 0;

}
