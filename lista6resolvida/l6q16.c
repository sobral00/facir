#include <stdio.h>
#include <string.h>

void main(){

int x;
char s[50];

printf("Insira um nome em letras minusculas: ");
gets(s);

for(x=0; x< strlen(s); x++){
        if(s[x]>=97 && s[x]<=122) s[x]-=32;
    }
printf("Seu nome em letras maiusculas: %s", s);
}
