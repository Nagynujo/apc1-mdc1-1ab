#include <stdio.h>
int main() {
  int n;
  int qtde_multiplos = 0;
  printf("Entre com um numero > 0: ");
  int leu_certo = scanf("%i", &n);

  if (leu_certo && n > 0) {
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        qtde_multiplos++;
      }
    }
    if (qtde_multiplos == 2) {
      printf("O numero %i é primo\n", n);
    } else {
      printf("O numero %i não é primo\n", n);
    }
  } else {
    printf("Numero invalido. Tente novamente!\n");
  }

  return 0;
}
