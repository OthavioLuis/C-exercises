#include <stdio.h>
//Programa MediaAlunos

int main(void) {
  double n1, media;

  for (int repetidor = 0; repetidor < 4; repetidor++) {
    printf("Digite a nota do %dº bimestre: ", repetidor+1);
    scanf("%lf", &n1);
    if (n1 < 0 || n1 > 10) {
      printf("Nota inválida\n");
      repetidor--;
      n1--;
      media -= n1;
    }
    media += n1;
  }
  media = (media / 4);
  if (media >= 7) {
    printf("Aprovado! A média do aluno foi: %.2lf", media);
  } else {
    printf("Reprovado, média mínima para aprovação é 7! Sua média foi %.2lf", media);
  }
  return 0;
}