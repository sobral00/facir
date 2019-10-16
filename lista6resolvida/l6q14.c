#include <stdio.h>
#include <string.h>

void main(){

int x;
char s[50];

printf("Insira uma palavra: ");
gets(s);

for(x=0; x< strlen(s); x++) s[x]+=1;

printf("Sua palavra se tornou: %s", s);
}
