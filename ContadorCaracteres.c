#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char nome[50];
  char sobrenome[50];

  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Digite seu sobrenome: ");
  scanf("%s", sobrenome);
  printf("-----------------------\n");
  printf("Seu nome tem %lu caracteres, e seu sobrenome tem %lu caracteres.\nJuntos tem %lu caracteres.", strlen(nome), strlen(sobrenome), strlen(nome) + strlen(sobrenome)); 
}