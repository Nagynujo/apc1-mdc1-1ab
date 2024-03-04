#include <stdio.h>

//#define é outra forma de declarar uma constante

int main(){
  float preco_inicail;
  float preco_final;

  const float ICMS = 0.17f;
  const float CONFIS = 0.076f;
  const float PIS = 0.0165f;
  
  preco_inicail = 100.0f;
  
  float valor_icms = ICMS * preco_inicail;
  float valor_confis = CONFIS * preco_inicail;
  float valor_pis = PIS * preco_inicail;
  
  preco_final = (1 + ICMS + CONFIS + PIS) * preco_inicail;
  
  printf("O preço inicial do produto é: %f\n", preco_inicail);
  printf("O valor do ICMS é: %f\n", valor_icms);
  printf("O valor do CONFIS é: %f\n", valor_confis);
  printf("O valor do PIS é: %f\n", valor_pis);
  printf("O preço final é %f\n", preco_final);

  return 0;
}