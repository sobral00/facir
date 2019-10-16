#include <stdio.h>
#include <string.h>

void main(){
char nome1[20],nome2[20];
int x,y,z;

printf("insira uma string: ");
gets(nome1);
printf("insira outra string: ");
gets(nome2);
x=strlen(nome1);
z=strlen(nome2);
printf("Primeira String invertida e com os A's trocados por *: ");

for(y=x-1;y>=0;y--){
        if(nome1[y]=='A'){
            nome1[y]='*';
            printf("%c",nome1[y]);
        }else{
            printf("%c",nome1[y]);
        }
    }
printf("\nSegunda String invertida e com os A's trocados por *: ");
for(y=z-1;y>=0;y--){
        if(nome2[y]=='A'){
            nome2[y]='*';
            printf("%c",nome2[y]);
        }else{
            printf("%c",nome2[y]);
        }
    }
}
