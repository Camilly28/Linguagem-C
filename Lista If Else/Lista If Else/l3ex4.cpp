#include <stdio.h>
#include <stdlib.h>

main()
{ int numero;
  printf("Informe um n�mero: ");
  scanf("%d",&numero);
  if (numero>=0)
     printf("N�mero positivo!\n");
  else   
     printf("N�mero negativo!\n");
  if (numero%2==0)
     printf("N�mero par!\n");
  else   
     printf("N�mero �mpar!\n");
  system("pause");
}
