#include <stdio.h>
int main(){
  int numero1;
  int numero2;

  printf("Digite o primeiro numero:");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo numero:");
  deu_certo = scanf("%i", &numero2);

  int sao_inguais = numero1 == numero2;
  printf("sao iguais? %i\n", sao_inguais);

  int sao_diferentes = numero1 != numero2;
  printf("sao diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("eh maior? %i\n", eh_maior);

  int eh_menor = numero1 < numero2;
  printf("eh menor? %i\n", eh_menor);
  
  int eh_maior_ou_igual = numero1 >= numero2;
  printf("eh maior ou igual? %i\n", eh_maior_ou_igual);

  int eh_menor_ou_igual = numero1 <= numero2;
  printf("eh menor ou igual? %i\n", eh_menor_ou_igual);

  int maior_q_zero_menor_q_dez = 0<numero1 && numero1<10;
  printf("maior que zero e menor que dez? %i\n", maior_q_zero_menor_q_dez);

  int menor_q_zero_maior_q_dez = numero1<0 || numero1>10;
  printf("menor que zero ou maior que dez? %i\n", menor_q_zero_maior_q_dez);

  int nao_eh_maior_q_zero = !(numero1>0);
  printf("nao eh maior que zero? %i\n", nao_eh_maior_q_zero);

  
  return 0;
}