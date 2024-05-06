#include <stdio.h>
// calcular o fatorial de um numero inteiro
int main(){
  int n;
  int fatorial = 1;
  printf("Entre com um numero >= 0: ");
  int leu_certo = scanf("%i", &n);
  
  if (leu_certo && n >= 0) {
    for (int i = n; i>1; i--){
      fatorial = fatorial * i;
    }
    printf("O fatorial de %i é %i\n", n, fatorial);
  } else {
    printf("Numero invalido. Tente novamente!\n");
  }
  return 0;
}