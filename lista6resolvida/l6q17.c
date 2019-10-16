void main() {
  char nome[50];
  int i;

  printf("Insira uma string: ");
  gets(nome);
  printf("Esta e sua string sem os espacos em branco: ");
  for (i=0;nome[i] != '\0';i++) {
      if(nome[i]!=' '){
          printf("%c",nome[i]);
    }
  }
}
