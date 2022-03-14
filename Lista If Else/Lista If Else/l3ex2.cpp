#include <stdio.h>
#include <stdlib.h>

main()
{ char nome1[50],nome2[50];
  int idade1,idade2,diferenca;
  printf("Informe o nome da primeira pessoa: ");
  scanf("%s",&nome1);
  printf("Informe o nome da segunda pessoa: ");
  scanf("%s",&nome2);
  printf("Informe a idade da primeira pessoa: ");
  scanf("%d",&idade1);
  printf("Informe a idade da segunda pessoa: ");
  scanf("%d",&idade2);
  if (idade1>=18)
      printf("A pessoa %s é maior de idade\n",nome1);
  else
      printf("A pessoa %s é menor de idade\n",nome1);
  if (idade2>=18)
      printf("A pessoa %s é maior de idade\n",nome2);
  else
      printf("A pessoa %s é menor de idade\n",nome2);

  if (idade1>idade2)
  {   printf("A pessoa %s é mais velha que a pessoa %s\n",nome1,nome2);  
      diferenca=idade1-idade2;
  }     
  else
    if (idade2>idade1)
    {   printf("A pessoa %s é mais velha que a pessoa %s\n",nome2,nome1);  
        diferenca=idade2-idade1;
    }
    else
    {    printf("As pessoas %s e %s têm a mesma idade\n",nome1,nome2);    
         diferenca=0;
    }     
  printf("A diferença de idade entre as pessoas é de %d anos\n",diferenca);
  system("pause");
}
