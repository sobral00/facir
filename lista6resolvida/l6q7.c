#include <stdio.h>

void main(){

int x,y,z,p,s;
char n1[30],n2[30];

printf("Insira a primeira string: ");
gets(n1);
printf("Insira a segunda string: ");
gets(n2);
y=0;
z=0;
for(x=0;n1[x]!='\0';x++){
        p=("%d",n1[x]);
        y+=p;
        }
for(x=0;n2[x]!='\0';x++){
        s=("%d",n2[x]);
        z+=s;
        }
if(z==y) printf("As strings tem o mesmo valor: %d.\n",y);
else if(y>z) printf("O valor da primeira string(%d) e maior que o valor da segunda string(%d).\n",y,z);
else if(y<z) printf("O valor da segunda string(%d) e maior que o valor da primeira string(%d).\n",z,y);
}
