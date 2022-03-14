/*
Faça um programa que leia um número N,
calcule e apresente o valor de H, onde H = 1 + 1/2+1/3+1/4+...+1/n.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,numero;
      float h=0;
      printf("Informe um número inteiro: ");
      scanf("%d",&numero);      
      for(i=1;i<=numero;i++)
      {   h=h+(1/(float)i);   }
      printf("Valor de H = %f\n",h);
      system("pause");
}
