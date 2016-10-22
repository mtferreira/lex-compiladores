#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "token.h"

int main(void){
	
  char  in[200];
  Token tokenV;

  printf("Analisador Lexico - Calculadora\n");
  
  printf("Insira uma expressao aritimetica: \n");
  fgets(in, 200, stdin);

  analise_lexica(in);

  printf("\n===== Resultados da Analise=====\n");

  while (proximo_token(&tokenV) != NULL) {
    imprime_token(&tokenV);
  }

  printf("\n");

  return 0;
}
