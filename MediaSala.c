#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool querContinuar() {
  int resposta = 1, opcao;

  printf("Deseja Calcular outra média?\n1 - Sim\n0 - Não\n-> ");
  while (resposta == 1) {
    scanf("%d", &opcao);
    if (opcao == 1 || opcao == 0) {
      resposta = 0;
      printf("---------------------------\n");
    } else {
      resposta = 1;
      printf("\n Opção Inválida! Deve ser 1 ou 0: ");
      printf("\n----------------------------------");
    }
  }
  if (opcao == 1) {
    return true;
  } else {
    return false;
  }
}


int main() {
  bool continua = true;
  float mediaTurma, acumulador = 0;
  int alunos = 0;
  printf("------------------\n");
  printf("Olá Vamos começar?\n");
  printf("------------------\n");
  while (continua) {
    float n1, n2, n3, n4;
    int media;

    for (int i = 1; i <= 4; i++) {
      printf("Digite a %dª nota: ", i);
      switch (i) {
        case 1:
          scanf("%f", &n1);
          break;
        case 2:
          scanf("%f", &n2);
          break;
        case 3:
          scanf("%f", &n3);
          break;
        case 4:
          scanf("%f", &n4);
          break;

      }
    }
    media = (n1 + n2 + n3 + n4) / 4;
    printf("\n---------------------------");
    acumulador += media;
    alunos += 1;
    if (media >= 7) {
      printf("\nAluno aprovado com média %d", media);
      printf("\n---------------------------\n");
    } else {
      printf("\nAluno reprovado com média %d", media);
      printf("\n---------------------------\n");
    }
    continua = querContinuar();
    system("clear");
  }
  system("clear");
  mediaTurma = acumulador / alunos;
  printf("\nMédia da turma: %.2f", mediaTurma);
  printf("\nObrigado por usar o programa!");
  printf("\n---------------------------\n");
  printf("Finalizado...");
  return 0;
}