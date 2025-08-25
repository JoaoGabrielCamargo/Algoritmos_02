#include <stdio.h>
#include <string.h>

char palavra(char texto)
  {
  printf("%c", texto);
  
  if(texto == '\n')
    {
    return 'o';
    }
  if(texto == '\0')
    {
    return 'k';
    }
  }

int main()
  {
  char str[50];
  printf("Digite a palavra: ");
  fgets(str, 50, stdin);
  
  for(int i = 0; i < strlen(str); i++)
    {
    palavra(str[i]);
    }
  return(0);
  }
