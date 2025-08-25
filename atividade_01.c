#include <stdio.h>

//quem chamar recebe um inteiro
int verificarNumero(int numero) //quem chamar o verificarPositivo, tem que receber um inteiro
  {
  if(numero >= 0)
    {
    return(1);
    }
  if(numero < 0)
    {
    return(0);
    }
  }
int main()
  {
  char verificar;
  do
    {
    int valor, resultado;
  
    printf("Digite um numero: ");
    scanf("%d", &valor);
  
    resultado = verificarNumero(valor);
  
    if(resultado >= 0)
      {
      printf("O numero eh par\n");
      }
    else
      {
      printf("O numero eh impar\n");
      }
    printf("Deseja Continuar? [s][n]\n");
    scanf(" %c", &verificar);
    }
  while(verificar == 'S' || verificar == 's');
  if(verificar == 'N' || verificar == 'n')
    {
    printf("Encerrando o Programa...");
    }
  return(0);
  }
