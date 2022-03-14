/*
Faça um programa que leia um número inicial e um número final
e mostre na tela todos os números inteiros entre eles.
Se o número final for menor que o inicial, o programa deve
apresentar uma mensagem de erro.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i;
      float ni,nf;
      printf("Informe um número inicial: ");
      scanf("%f",&ni);      
      printf("Informe um número final: ");
      scanf("%f",&nf);      

      if (ni<=nf)
      {  for(i=ni;i<=nf;i++)
         {   printf("%d\n",i);   }
      }     
      else
      {   printf("Erro!\n"); }
      system("pause");
}
