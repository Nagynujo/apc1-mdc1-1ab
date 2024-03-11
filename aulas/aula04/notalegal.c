#include <stdio.h>

int main()
{
  printf("-----------------\n");
  printf("   NOTA LEGAL    \n");
  printf("-----------------\n");
  printf("Item            Qtd  Valor\n");
  
  char item[31] = "Banana prata";
  int qtde = 1;
  float valor = 3.00f;
  printf("%-14s %03i %11.2f\n", item, qtde, valor);
  
  char item2[31] = "Laranja";
  qtde=10;
  valor = 2.50f;
  printf("%-14s %03i %11.2f\n", item2, qtde, valor);
  
  char item3[31] = "Coca cola";
  qtde = 6;
  valor = 5.99f;
  printf("%-14s %03i %11.2f\n", item3, qtde, valor);
  
  printf("-----------------\n");
  printf("TOTAL            %11.2f\n", valor*qtde);

  
  //printf("Banana prata    1    R$ 3.00\n");
  //printf("Laraja          1    R$ 4.50\n");
  //printf("Coca cola       1    R$ 5.20\n");
  



  
return 0;
}