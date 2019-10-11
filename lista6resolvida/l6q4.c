#include <stdio.h>

void main(){

int x;
char nome[30];

printf("Insira um nome: ");
gets(nome);
for(x=0;x<4;x++) printf("%c",nome[x]);
}
