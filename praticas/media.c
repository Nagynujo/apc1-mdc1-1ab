#include <stdio.h>
int main(){

  float nota1;
  float nota2;
    
  printf("Digite a primeira nota: ");
  int deu_certo = scanf("%f", &nota1);

  if(nota1 >= 0.0 && nota1 <= 10.0 && deu_certo){
    printf("Digite a segunda nota: ");
    deu_certo = scanf("%f", &nota2);

    if(nota2 >= 0.0 && nota2 <= 10.0 && deu_certo){
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("A média é %.1f\n", media);
    }
    else {
      printf("A segunda nota está inválida\n");
    }
  }
  else {
    printf("A primeira nota está inválida\n");
  }
  
  return(0);

}