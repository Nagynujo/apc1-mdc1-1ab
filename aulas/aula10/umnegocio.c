#include <stdio.h>
int main() {
  int numero[11];
  int soma = 0;

  for (int i = 1; i <= 10; i++) {
    printf("Entre com o %i° numero: ", i);
    int deu_certo = scanf("%i", &numero[i]);
    soma = soma + numero[i];
  }
  float media = soma / 10.0f;
  printf("A media de ");
  for (int i = 1; i <= 9; i++) {
    printf("%i + ", numero[i]);
  }
  printf("%i", numero[10]);
  printf(" = %.1f\n", media);

  return 0;
}