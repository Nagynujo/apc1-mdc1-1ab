#include <stdio.h>

int main() {
  float valo_bruto;
  float valo_desconto;

  printf("Entre com o valor bruto:");
  int leu_certo = scanf("%f", &valo_bruto);
  if (leu_certo) {
    if (valo_bruto <= 100.f) {
      valo_desconto = valo_bruto * 0.01;
    } else if (valo_bruto <= 500.0f) {
      valo_desconto = valo_bruto * 0.05f;
    } else {
      valo_desconto = valo_bruto * 0.1f;
    }

    printf("O valor do desconto é %.2f\n", valo_desconto);
  } else {
    printf("Valor invalido. Tente novamente!\n");
  }

  return 0;
}