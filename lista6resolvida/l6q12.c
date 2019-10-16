#include <stdio.h>

void main(){

int x, y=0;
char s[30], c;

printf("Insira uma string: ");
gets(s);
printf("Insira um caractere: ");
scanf("%c", &c);

for(x=0; s[x]!='\0'; x++)
    {
    if(s[x]=='a' || s[x]=='e' || s[x]=='i' || s[x]=='o' || s[x]=='u')
        {
    s[x]=c;
    y++;
        }
    }
printf("A string tem %d vogais.\n", y);
printf("%s", s);
}
