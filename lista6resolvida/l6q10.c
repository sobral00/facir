#include <stdio.h>

void main(){

char nome[20];
int x,y;

printf("insira um nome: ");
gets(nome);
x=strlen(nome);
printf("Seu nome ao contrario e: ");
for(y=x-1;y>=0;y--){
    printf("%c",nome[y]);
}
}
