#include <stdio.h>
int main(){
  int opcao;

  printf("Menu principal\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar saldo\n");
  printf("3 - Ligações recebidas\n");
  printf("4 - Ligações feitas\n");
  printf("0 - Sair\n");
  printf("Escolha uma opção: ");
  int leu_certo = scanf("%i", &opcao);

  switch(opcao){
    case 1:
    printf("Seu saldo é de R$ 10.00\n");
    break;
    case 2:{
      float valor;
      printf("Entre como valor da recarga");
      leu_certo = scanf("%f", &valor);
      break;
    }
    case 3:{
      printf("As ultimas 5 ligações recebidas foram:\n");
      printf("9999-9999\n");
      printf("9999-8888\n");
      printf("9999-7777\n");
      printf("9999-6666\n");
      printf("9999-5555\n");
      break;
    }
    case 4:{
      printf("As ultimas 5 ligações feitas foram:\n");
      printf("9999-9999\n");
      printf("9999-8888\n");
      printf("9999-7777\n");
      printf("9999-6666\n");
      printf("9999-5555\n");
      break;
    }
    case 0:
    printf("Bye bye\n");
    break;
    default:
    printf("Opção inválida. Tente novamente\n");
  }

  return 0;
}