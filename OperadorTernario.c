#include <stdio.h>
int main() {
  double idade;

  printf("Digite sua idade: ");
  scanf("%lf", &idade);
  idade = (idade < 18) ? printf("Você é menor de idade.") : printf("Você é maior de idade!");
}