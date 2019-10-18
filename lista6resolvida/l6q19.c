#include <stdio.h>

void main(){
typedef struct lista{

char nome[15];
int idade;

}Tlista;

Tlista pessoa[10];
int y=0,z=0;
float media;

    for(int x=0;x<10;x++){
    printf("Insira seu primeiro nome: ");
    scanf("%s",&pessoa[x].nome);
    setbuf(stdin,NULL);
    printf("Insira sua idade: ");
    scanf("%d",&pessoa[x].idade);
    setbuf(stdin,NULL);
        if(pessoa[x].idade < 0 ) break; else y+=pessoa[x].idade; z+=1;
    }

media=y/z;

printf("\n- Pessoas Mais Velhas -\n");
for(int x=0;x<z;x++){
    if(media<pessoa[x].idade) {
        printf("Nome: %s, Idade: %d\n",pessoa[x].nome,pessoa[x].idade);
        }
    }
printf("\n- Pessoas Mais Novas -\n");
for(int x=0;x<z;x++){
    if(media>=pessoa[x].idade) {
        if(pessoa[x].idade > 0) printf("Nome: %s, Idade: %.d\n",pessoa[x].nome,pessoa[x].idade);
        }
    }
}
