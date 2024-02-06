#include <stdio.h>
//Programa MediaAlunos

int main(void) {
  double n1, media;

  for (int repetidor = 0; repetidor < 4; repetidor++) { //Aqui tem um laço com limite de 4 repetições
    printf("Digite a nota do %dº bimestre: ", repetidor+1);
    scanf("%lf", &n1);
    if (n1 < 0 || n1 > 10) { //coloquei uma limitaçao para que o usuario nao coloque notas menores que 0 ou maiores que 10
      printf("Nota inválida\n");
      repetidor--; //se a nota for invalida, o repetidor volta uma casa para o usuario digitar novamente
      n1--; //o n1 tambem volta uma casa para o usuario digitar novamente caso seja invalida
      media -= n1; //A média a mesma coisa, para não somar no final os números invalidos
    }
    media += n1; //Aqui eu estou fazendo media = media + n1
  }
  media = (media / 4); //Por fim só divido por 4 para saber a media final
  if (media >= 7) {
    printf("Aprovado! A média do aluno foi: %.2lf", media);
  } else {
    printf("Reprovado, média mínima para aprovação é 7! Sua média foi %.2lf", media);
  }
  return 0;
}