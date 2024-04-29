#include <stdio.h>
int main() {

  int idade;

  printf("Digite a sua idade: ");
  int deu_certo = scanf("%i", &idade);
  if (deu_certo) {
    if (idade < 16) {
      printf("Não eleitor\n");
    } else if (idade >= 18 && idade <= 70) {
      printf("Eleitor obrigatório\n");
    } else {
      printf("Eleitor facultativo\n");
    }
  } else {
    printf("O caractere é invalido!\n");
  }
   
  return 0;
}  