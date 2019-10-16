#include <stdio.h>
#include <string.h>

void main(){

int x;
char s[50];

printf("Insira um nome em letras maiusculas: ");
gets(s);

for(x=0; x< strlen(s); x++){
        if(s[x]>=65 && s[x]<=90) s[x]+=32;
    }
printf("Seu nome em letras minusculas: %s", s);
}
