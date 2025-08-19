#include <stdio.h>

int main()
  {
  int numero, resto, quadrado;
  char verificar;
  
  do
    {
    printf("Digite o numero ");
    scanf("%d", &numero);
  
    resto = numero % 2;
  
    if(resto == 0)
      {
      printf("O numero eh par\n");
      quadrado = numero * numero;
      printf("Numero ao quadrado eh %d", quadrado);
      printf("Deseja continuar?\n[s][n]");
      scanf(" %s", &verificar);
      }
    else
      {
      printf("O numero nao eh par");
      printf("\nDeseja continuar?\n[s][n]\n");
      scanf(" %s", &verificar);
      }
    }
    while(verificar == 's');
  printf("Encerrando o programa...");
  return(0);
  }
