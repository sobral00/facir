#include <stdio.h>

void main() {
  char nome[20];
  int i;

  printf("Insira uma string: ");
  gets(nome);
  printf("Esta e sua string sem as vogais: ");
  for (i=0;nome[i] != '\0';i++) {
      if(nome[i]!='a'&&nome[i]!='e'&&nome[i]!='i'&&nome[i]!='o'&&nome[i]!='u'){
          printf("%c",nome[i]);
    }
  }
}
