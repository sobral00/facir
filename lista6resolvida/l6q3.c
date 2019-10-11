#include <stdio.h>

void main(){

char nome[30];

printf("Insira uma palavra: ");
gets(nome);

if(nome[0] == 'A' || nome[0] == 'a') printf("%s",nome);
else printf("A palavra nao comeca com A ou a.");
}
