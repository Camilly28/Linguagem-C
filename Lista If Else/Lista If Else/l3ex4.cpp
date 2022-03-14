#include <stdio.h>
#include <stdlib.h>

main()
{ int numero;
  printf("Informe um número: ");
  scanf("%d",&numero);
  if (numero>=0)
     printf("Número positivo!\n");
  else   
     printf("Número negativo!\n");
  if (numero%2==0)
     printf("Número par!\n");
  else   
     printf("Número ímpar!\n");
  system("pause");
}
