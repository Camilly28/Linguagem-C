/*
Faça um programa que leia um número N e escreva na tela todos os números pares
de 0 a N e todos os números ímpares de N a 0.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,numero;
      printf("Informe um número inteiro: ");
      scanf("%d",&numero);
      for(i=0;i<=numero;i++)
      {   if (i%2==0)
          { printf("%d é par!\n",i);  }
      }         
      for(i=numero;i>=0;i--)
      {   if (i%2!=0)
          { printf("%d é ímpar!\n",i);  }
      }    
      system("pause");
}
