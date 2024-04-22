#include <stdio.h>
int main(){
  // determinar se o numero é impar ou par

  int numero;
  printf("Digite um número: ");
  int deu_certo = scanf("%i", &numero);
  
  if(deu_certo){
    if(numero % 2 == 0) {
    printf("O numero é par\n");
    }
    else {
      printf("O numero é impar\n");
      }
    }

  else {
    printf("O caractere é invalido!\n");
    }
  
  return 0;
}