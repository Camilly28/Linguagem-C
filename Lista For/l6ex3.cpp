/*
Faça um programa que leia o nome e as 4 notas bimestrais de 10 alunos,
calculando e apresentando a média de cada um.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,j;
      float nota,soma,media;
      
      for(i=1;i<=10;i++)
      {   soma=0;
          for(j=1;j<=4;j++)
          {   printf("Informe a nota%d do aluno%d: ",j,i);
              scanf("%f",&nota);
              soma=soma+nota;
          }
          media=soma/4;
          printf("A média do aluno%d é %.2f\n",i,media);
      }         
      system("pause");
}
