#include <stdio.h>
#include <stdlib.h>

/*13)Ler as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que
/parte da avaliação. Calcular a média de aproveitamento, usando a fórmula abaixo e escrever
/o conceito do aluno de acordo com a tabela de conceitos mais abaixo:
/Média de Aproveitamento =(n1+(n2*2)+(n3*3)+media de exercicios)/7
/A atribuição de conceitos obedece a tabela abaixo:
/Media de Aproveitamento Conceito
/>=9	                    A
/>=7,5 e < 9	            B
/>= 6 e < 7,5	            C
/< 6	                    D
*/


int main()
{
    float ma,me,n1,n2,n3;

    printf("Insira suas 3 notas e a media de exercicios: \n");
    scanf("%f%f%f%f",&n1,&n2,&n3,&me);
    ma=(n1+(n2*2)+(n3*3)+me)/7;
    if(ma>=9)
    {
        printf("Conceito A.\n");
    }else{
    if(ma>=7.5 && ma<9)
    {
        printf("Conceito B.\n");
    }else{
    if(ma>=6 && ma<7.5)
    {
        printf("Conceito C.\n");
    }else{
        printf("Conceito D.\n");
    }
    }
    }
system("pause");
return 0;
}
