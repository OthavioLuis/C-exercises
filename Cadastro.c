#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char endereco[100], nome[100], nasc[5]; 
  int anoAtual = 2024, idade;
  

  printf("\nCadastro - Banco de dados\n");
  printf("\nDigite seu nome: ");
  fgets(nome, 100, stdin);
  printf("Digite seu endereço: ");
  fgets(endereco, 100, stdin);
  printf("Digte o ano de nascimento:");
  fgets(nasc, 5, stdin);
  idade = anoAtual - atoi(nasc);
  printf("\n---------------------------------\n");
  
  printf("\nNome Cadastrado: %s\nIdade Cadastrada: %d\n\nEndereço Cadastrado: %s\n", nome, idade, endereco);

  return 0;
}