/*
Fa�a um programa que leia um n�mero N e escreva na tela todos os n�meros pares
de 0 a N e todos os n�meros �mpares de N a 0.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,numero;
      printf("Informe um n�mero inteiro: ");
      scanf("%d",&numero);
      for(i=0;i<=numero;i++)
      {   if (i%2==0)
          { printf("%d � par!\n",i);  }
      }         
      for(i=numero;i>=0;i--)
      {   if (i%2!=0)
          { printf("%d � �mpar!\n",i);  }
      }    
      system("pause");
}
