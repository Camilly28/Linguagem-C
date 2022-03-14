/*
Faça um programa que leia um número inteiro entre 1 e 9 e mostre a tabuada de
multiplicação do mesmo.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,numero;
      printf("Informe um número inteiro entre 1 e 9: ");
      scanf("%d",&numero);
      for(i=0;i<=10;i++)
      {   printf("%d x %d = %d\n",numero,i,numero*i);              }
      system("pause");
}
