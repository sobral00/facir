#include <stdio.h>

void main() {
  char nome[20];
  int i;
  printf("Insira uma string: ");
  gets(nome);
  for (i=0;nome[i] != '\0';i++) {
      if(nome[i]=='0'){
        nome[i]='1';
      }
  }
  printf("%s",nome);
}

