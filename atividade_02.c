#include <stdio.h>

int main()
  {
  int dia, mes, ano, validacao;
  do
    {
    validacao = 0;
    printf("Digite sua data de nascimento\n");
    scanf("%d %d %d", &dia, &mes, &ano);
  
    if(dia > 31 || mes > 12)
      {
      printf("Erro...Voce colocou uma data invalido\n");
      validacao = 1;
      }
    if(dia <= 0 || mes <= 0)
      {
      printf("Erro...Voce colocou uma data invalido\n");
      validacao = 1;
      }
    }
  while(validacao == 1);
  if(validacao == 0)
    {
    printf("Sua data de Nascimento eh %d/%d/%d", dia, mes, ano);
    }
  return(0);
  }
