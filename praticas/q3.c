#include <stdio.h>
int main(){

  float pi = 3.1416f;
  int raio;
  float perimetro;

  printf("Entre com o valor do raio: ");
  int deu_certo = scanf("%i", &raio);
  perimetro = pi * raio * raio;
  printf("O perimetro da circunferencia eh %f\n", perimetro);

  return 0;
  
}