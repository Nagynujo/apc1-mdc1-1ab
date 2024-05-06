#include <stdio.h>
int main(){

  int n;
  printf("Entre com um numero de 1 a 100: ");
  int leu_certo = scanf("%i", &n);

  if (leu_certo > 0 && n < 101){
    printf("Os multiplos de %i entre 1 e 100 sao: \n", n);
    for (int i = 1; i <= 100; i++){
      if (i % n == 0){
        printf("%i\n", i);
      }
    }
     printf("\n");
  } else {
    printf("Numero invalido. Tente novamente!\n");
  }
  return 0;
}