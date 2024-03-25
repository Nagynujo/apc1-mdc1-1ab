#include <stdio.h>
#include <math.h>

int main(){
  float numero1;
  float numero2;
  
  printf ("Digite o primeiro número: ");
  float deu_certo = scanf("%f", &numero1);

  printf ("Digite o segundo número: ");
  deu_certo = scanf("%f", &numero2);

  float soma = numero1 + numero2;
  printf("A soma é %.2f\n", soma);

  float subtracao = numero1 - numero2;
  printf("A subtração é %.2f\n", subtracao);

  float multiplicacao = numero1 * numero2;
  printf("A multiplicação é %.2f\n", multiplicacao);

  float divisao = numero1 / numero2;
  printf("A divisão é %.2f\n", divisao);

  printf("O incremento é %i\n", (int)++numero1);
  printf("O decremento é %i\n", (int)--numero1);
  
  printf("O incremento é %i\n", (int)++numero2);
  printf("O decremento é %i\n", (int)--numero2);

  double raiz_quadrada1 = sqrt(numero1);
  printf("A raiz quadrada do primeiro número é %f\n", raiz_quadrada1);
  double raiz_quadrada2 = sqrt(numero2);
  printf("A raiz quadrada do segundo número é %f\n", raiz_quadrada2);
  
  return 0;
  
}