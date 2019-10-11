#include <stdio.h>
#include <ctype.h >

void main(){

int x,y=0;
char nome[30];

printf("Escreva uma palavra ou frase: ");
gets(nome);
for(x=0;nome[x]!='\0';x++){
    if(isalpha(nome[x])){
            y++;
        }
}
printf("Voce escreveu %d letras.",y);
}
