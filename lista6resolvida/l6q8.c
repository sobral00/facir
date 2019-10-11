#include <stdio.h>

void main() {
  char nome[20];
  int i;
  int c=0;
  printf("Insira uma string: ");
  gets(nome);
  for (i=0;nome[i] != '\0';i++) {
      if(nome[i]=='1'){
        c++;
      }
  }
  printf("Sua string tem %d 1's.\n",c);
}
