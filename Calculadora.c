#include <stdio.h>

int pergunta(int *n1, int *n2) {
  int resultado;
  printf("Digite o primeiro número: ");
  scanf("%d", n1);
  printf("Digite o segundo número: ");
  scanf("%d", n2);
  return resultado;
}

int adicao() {
  int n1, n2, resultado;
  pergunta(&n1, &n2);
  resultado = n1 + n2;
  printf("O resultado da adição é: %d\n", resultado);
  return resultado;
}
int subtracao() {
  int n1, n2, resultado;
  pergunta(&n1, &n2);
  resultado = n1 - n2;
  printf("O resultado da subtração é: %d\n", resultado);
  return resultado;
}
int multiplicacao() {
  int n1, n2, resultado;
  pergunta(&n1, &n2);
  resultado = n1 * n2;
  printf("O resultado da multiplicação é: %d\n", resultado);
  return resultado;
}
int divisao() {
  int n1, n2, resultado;
  pergunta(&n1, &n2);
  if(n2 > n1) {
    printf("Números negativos não são permitidos!\n");
  } else {
    resultado = n1 / n2;
    printf("O resultado da divisão é: %d\n", resultado);
  }
  return resultado;
}

int operaValores(char operacao) {
  int resultado = 0;
  switch (operacao) {
    case '1':
      resultado = adicao();
      break;
    case '2':
      resultado = subtracao();
      break;
    case '3':
      resultado = multiplicacao();
      break;
    case '4':
      resultado = divisao();
      break;
    default:
      printf("Número Inválido.\n");
      break;
  }
  return resultado;
}

int main(void) {
  char escolha;
  printf("Escolha uma das opções abaixo:\n");
  printf("1 - Adição\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");
  scanf(" %c", &escolha);
  int operacao = operaValores(escolha);
  return 0;
}