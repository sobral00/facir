#include <stdio.h>

void main(){

int x, y=0;
char s[30];

printf("Insira uma frase: ");
gets(s);

for(x=0; s[x]!='\0'; x++)
    {
    if(s[x]==' ')
        {
    y++;
        }
    }
printf("A frase tem %d espacos em branco.\n", y);
}
