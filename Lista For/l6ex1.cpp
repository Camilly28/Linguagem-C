/*
Fa�a um programa que leia um n�mero inteiro entre 1 e 9 e mostre a tabuada de
multiplica��o do mesmo.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,numero;
      printf("Informe um n�mero inteiro entre 1 e 9: ");
      scanf("%d",&numero);
      for(i=0;i<=10;i++)
      {   printf("%d x %d = %d\n",numero,i,numero*i);              }
      system("pause");
}
