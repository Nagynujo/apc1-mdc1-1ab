#include <stdio.h>
int main(){
  // transformar de GB para B

  long int tamanho_em_gb;
  printf("Digite o tamanho do arquivo em GB: ");
  int deu_certo = scanf("%li", &tamanho_em_gb);

  long int tamanho_em_bytes = tamanho_em_gb * 1024 * 1024 * 1024;
  printf("O arquivo tem %li bytes\n", tamanho_em_bytes);

  return 0;
}