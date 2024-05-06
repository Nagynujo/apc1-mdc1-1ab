#include <stdio.h>
int main() {
  int numero;

  printf("Entre com um numero de 1 a 10: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo > 0 && numero < 11) {
    for (int i = 1; i <= 10; i++) {
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
  } else {
    printf("Numero invalido. Tente novamente!\n");
  }

  return 0;
}