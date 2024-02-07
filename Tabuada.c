#include <stdio.h>
#include <stdlib.h>
//Tabuada com FOR
int main() {
  double num;
  printf( "Digite o número da Tabuada que queres ver: ");
  scanf("%lf", &num);
  for (int i = 1; i <= 10; i++) {
    printf("%.lf X %d = %.lf\n", num, i, num * i);
  }
  printf("Fim da Tabuada");
}