/*
Fa�a um programa que leia um n�mero inteiro N e mostre todos os n�meros primos
entre 1 e N.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,numero,j,cont;
      printf("Informe um n�mero inteiro: ");
      scanf("%d",&numero);      
      for(i=1;i<=numero;i++)
      {   cont=0;
          for(j=1;j<=numero;j++)
          {   if (i%j==0)
              { cont++; }
          }    
          if(cont==2)
          { printf("O n�mero %d � primo!\n",i);   }
      }
      system("pause");
}
