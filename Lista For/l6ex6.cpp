/*
Faça um programa que leia um número inteiro N e mostre todos os números primos
entre 1 e N.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,numero,j,cont;
      printf("Informe um número inteiro: ");
      scanf("%d",&numero);      
      for(i=1;i<=numero;i++)
      {   cont=0;
          for(j=1;j<=numero;j++)
          {   if (i%j==0)
              { cont++; }
          }    
          if(cont==2)
          { printf("O número %d é primo!\n",i);   }
      }
      system("pause");
}
