#include <stdio.h>

void main(){

int z;
char s[30],x,y;

printf("Insira uma string: ");
gets(s);
setbuf(stdin,NULL);
printf("Insira uma letra: ");
scanf("%c",&x);
setbuf(stdin,NULL);
printf("Insira outra letra: ");
scanf("%c",&y);
setbuf(stdin,NULL);

for (z=0;s[z] != '\0';z++) if(s[z]== x) s[z]=y;

printf("Sua string alterada e: %s. ",s);
}
