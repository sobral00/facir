#include <stdio.h>

void main(){

int idade;
char nome[30],sexo;

printf("Insira seu nome: ");
gets(nome);
setbuf(stdin,NULL);
printf("Insira sua idade: ");
scanf("%d",&idade);
setbuf(stdin,NULL);
printf("Insira seu sexo, f para feminino e m para masculino: ");
scanf("%c",&sexo);
setbuf(stdin,NULL);

if(sexo == 'f' && idade<25){
    printf("%s Aceita.",nome);
    }else{
        printf("Nao Aceita.");
    }
}
