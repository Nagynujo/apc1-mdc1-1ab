#include <stdio.h>
#include <stdlib.h>

//protótipo poneiros "argumentos por referencia"
void reajusta20(float *preco, float *reajuste)
{
  *reajuste = *preco *0.2;
  *preco *= 1.2;
}
int main(){
  float val_preco, val_reaju;
  do {
    printf("\n Insira o preço atual: ");
    scanf("%f", &val_preco);
    reajusta20(&val_preco, &val_reaju); //enviando os endereços
    printf("\n O preço novo é: %.2f\n", val_preco);
    printf("O aumento foi de: %.2f\n", val_reaju);
  }
  while(val_preco != 0.0);

  return 0;
}
