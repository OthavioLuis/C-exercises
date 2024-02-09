#include <stdio.h>
#include <stdlib.h>

int main() {
  double valoresMesTemperatura[3][4];

  for (int mes = 0; mes < 3; mes++) {
    printf("\nTemperatura do mês %d\n", mes + 1);
    double soma = 0, somatorio = 0;
    for (int semana = 0; semana < 4; semana++) {
      printf("Semana %d: ", semana + 1);
      scanf("%lf", &valoresMesTemperatura[mes][semana]);
      soma += valoresMesTemperatura[mes][semana];
    }
    somatorio = soma /4;
    printf("\n--------------------------------------------\n");
    printf("\nMédia das temperaturas do mês %d: %.lf\n", mes + 1, somatorio);
    if(somatorio <= 0){
      printf("\nTemperatura negativa, é o Canadá é?!\n");
    } else if (somatorio >=1 && somatorio <= 15) {
      printf("Temperatura moderada..\n");
    } else if (somatorio >= 16 && somatorio <= 30) {
      printf("Temperatura alta!\n");
    } else {
      printf("Temperatura muito alta! Estava no RJ??\n");
    }
    printf("\n--------------------------------------------\n");
  }
}