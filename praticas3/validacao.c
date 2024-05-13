#include <stdio.h>
int main() {

  int n;
  int n_eh_valido = 0;

  while (n_eh_valido == 0) {
    printf("entre com um numero de 1 a 10: ");
    int leu_certo = scanf("%i", &n);

    n_eh_valido = leu_certo && n >= 1 && n <= 10;

    if (n_eh_valido == 0){
      printf("Numero invalido. Tente novamente!\n");
      getchar();
    }
  }
  printf("O numero é valido\n");

  return 0;
}