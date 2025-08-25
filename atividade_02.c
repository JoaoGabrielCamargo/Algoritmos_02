#include <stdio.h>

int verificarNumero(int numero_01, int numero_02)
  {
  int soma;
    soma = numero_01 + numero_02;
    return(soma);
  }

int main()
  {
  int valor_01, valor_02, resultado;
  do
    {
    printf("Digite dois valores: ");
    scanf("%d %d", &valor_01, &valor_02);
    }
  while(valor_01 < 0 || valor_02 < 0);
  
  resultado = verificarNumero(valor_01, valor_02);
  printf("O valor da soma dos numeros eh: %d\n", resultado);
  
  return(0);
  }
