#include <stdio.h>
int main(){
  float valor_hora_trabalho = 150.0f;
  int total_horas_trabalhas = 200;

  const float ir = 0.25f;
  const float inss = 0.11f;
  float salario_bruto = valor_hora_trabalho * total_horas_trabalhas;
  float valor_ir = salario_bruto * ir;
  float valor_inss = salario_bruto * inss;
  float salario_liquido = salario_bruto - valor_ir - valor_inss;

  printf("\x1b[3m\x1b[31m_____________________\n");
  printf("|   Contracheque    |\n");
  printf("---------------------\x1b[0m\n");

  printf("salario bruto...: \x1b[32m%8.2f\x1b[0m\n", salario_bruto);
  printf("valor ir........: \x1b[33m%8.2f\x1b[0m\n", valor_ir);
  printf("valor inss......: \x1b[33m%8.2f\x1b[0m\n", valor_inss);
  printf("salario liquido.: \x1b[32m%8.2f\x1b[0m\n", salario_liquido);

  
  return 0;
}