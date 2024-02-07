#include <stdio.h>
int main() {
  double idade;
  printf("Digite sua idade: ");
  scanf("%lf", &idade);
  printf("%s", (idade < 18) ? "Você é menor de idade" : "Você é maior de idade");
  return 0;
}