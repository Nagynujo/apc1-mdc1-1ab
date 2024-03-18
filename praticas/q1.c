#include <stdio.h>

int main(){
  float A1= 0.0f;
  float A2= 0.0f;

  float a1 = 0.4f;
  float a2 = 0.6f;

  printf("entre com valor de A1:");
  int deu_certo = scanf("%f", &A1);
  
  printf("entre com valor de A2:");
  deu_certo = scanf("%f", &A2);
  
  float media = (A1 * a1) + (A2 *a2);
  printf("media = %f\n", media);
  

  return 0;
}
