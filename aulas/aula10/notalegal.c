#include <stdio.h>

int main() {

  struct item_nota_fiscal {
    char nome[21];
    int quantidade;
    float preco;
    float valor;
  };

  struct item_nota_fiscal item[5];

  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%[^\n]s", item[i].nome);
    while (getchar() != '\n')
      ;

    printf("Entre com a quantidade do produto: ");
    deu_certo = scanf("%i", &item[i].quantidade);
    while (getchar() != '\n')
      ;

    printf("Entre com o valor do produto: ");
    deu_certo = scanf("%f", &item[i].valor);
    while (getchar() != '\n')
      ;
    printf("Entre com o total do produto: ");
    deu_certo = scanf("%f", &item[i].preco);
    while (getchar() != '\n')
      ; 
    
    item[i].preco = item[i].valor * item[i].quantidade;
  }
  printf("\n NOTA LEGAL \n");
  printf("---------------------\n");
  printf("Item         Qtd   Valor");
  for (int i = 0; i < 5; i++) {
    printf("%-14s%03i%7.2f\n", item[i].nome, item[i].quantidade, item[i].valor);
  }

  return 0;
}