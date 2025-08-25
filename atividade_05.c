#include <stdio.h>
#include <string.h>

void palavra(char texto)
  {
  printf("%c", texto);
  return;
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
