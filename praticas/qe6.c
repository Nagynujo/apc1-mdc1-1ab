#include <math.h>
#include <stdio.h>
int main() {
  // calcular raizes de uma equação de segundo grau atraves da fórmula de
  // bhaskara () ax² + bx + c = 0 x = (-b +- raiz(b² - 4ac)) / 2a delta = b² -
  // 4ac

  float a;
  float b;
  float c;

 

  printf("Digite o valor de a: ");
  int deu_certo = scanf("%f", &a);

  printf("Digite o valor de b: ");
  deu_certo = scanf("%f", &b);

  printf("Digite o valor de c: ");
  deu_certo = scanf("%f", &c);

  float delta = b * b - 4 * a * c;
  float raiz1 = (-b + sqrt(delta)) / (2 * a);
  float raiz2 = (-b - sqrt(delta)) / (2 * a);
  if (delta < 0) { 
    float equacao1 = a * raiz1 * raiz1 + b * raiz1 + c;
    float equacao2 = a * raiz2 * raiz2 + b * raiz2 + c;
    equacao1 =  a * raiz1 * raiz1 + b * raiz1 + c;
    equacao2 =  a * raiz2 * raiz2 + b * raiz2 + c;
   
  }
  printf("delta = %f\n", delta);
  printf("O valor da raiz 1 é: %f\n", raiz1);
  printf("O valor da raiz 2 é: %f\n", raiz2);
  
 
  printf("O valor da equação 2 é: %f\n", equacao1);
  printf("O valor da equação 3 é: %f\n", equacao2);
  
  return 0;
}