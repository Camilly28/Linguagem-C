/*
Fa�a um programa que leia um n�mero inicial e um n�mero final
e mostre na tela todos os n�meros inteiros entre eles.
Se o n�mero final for menor que o inicial, o programa deve
apresentar uma mensagem de erro.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i;
      float ni,nf;
      printf("Informe um n�mero inicial: ");
      scanf("%f",&ni);      
      printf("Informe um n�mero final: ");
      scanf("%f",&nf);      

      if (ni<=nf)
      {  for(i=ni;i<=nf;i++)
         {   printf("%d\n",i);   }
      }     
      else
      {   printf("Erro!\n"); }
      system("pause");
}
