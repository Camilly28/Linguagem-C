/*
Fa�a um programa que leia 30 n�meros inteiros quaisquer.
No final, o programa deve mostrar a quantidade de n�meros inteiros positivos,
negativos e zeros digitados.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,numero,contp,contn,contz;
      contp=0;
      contn=0;
      contz=0;     
      for(i=1;i<=30;i++)
      {   printf("Informe um n�mero inteiro: ");
          scanf("%d",&numero);
          if(numero>0)
          {contp++;}
          else
            if(numero<0)
            {contn++;}
            else
            { contz++;}
      }
      printf("Quantidade de n�meros positivos = %d\n",contp);
      printf("Quantidade de n�meros negativos = %d\n",contn);      
      printf("Quantidade de n�meros zeros = %d\n",contz);      
      system("pause");
}
