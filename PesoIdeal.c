#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float malhar(int idade, float peso) {
  if (idade < 25) {
    peso -= 2;
  } else {
    peso -= 1;
  }
  return peso;
}

int main(void) {
  char nome[50];
  int idade, vezesMalhou = 0;
  float pesoHoje, pesoIdeal;

  printf("--------------------\n");
  printf("M a l h a r  é vida!\n");
  printf("--------------------\n");
  printf("Digite seu nome: ");
  fgets(nome, 50, stdin);
  nome[strcspn(nome, "\n")] = '\0';
  printf("Digite sua idade: "); 
  scanf("%d", &idade);
  printf("Digite seu peso: ");
  scanf("%f", &pesoHoje);
  printf("Digite seu peso ideal: ");
  scanf("%f", &pesoIdeal);

  while (pesoHoje > pesoIdeal) {
    pesoHoje = malhar(idade, pesoHoje);
    vezesMalhou += 1;
  }
  printf("%s, você precisa malhar %d vezes por semana para chegar no peso ideal.", nome, vezesMalhou);  
  return  0;
}