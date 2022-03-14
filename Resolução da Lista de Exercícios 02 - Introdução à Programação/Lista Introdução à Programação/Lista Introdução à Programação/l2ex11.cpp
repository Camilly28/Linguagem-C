#include <stdio.h>
#include <stdlib.h>
main()
{
      char n1[20],n2[20],n3[20];
      float p1,p2,p3,vtotal;
      int q1,q2,q3;
      printf("Informe o nome do primeiro produto: ");
      scanf("%s",&n1);
      printf("Informe o nome do segundo produto: ");
      scanf("%s",&n2);
      printf("Informe o nome do terceiro produto: ");
      scanf("%s",&n3);
      printf("Informe o preço unitário do primeiro produto: ");  
      scanf("%f",&p1);      
      printf("Informe o preço unitário do segundo produto: ");  
      scanf("%f",&p2);      
      printf("Informe o preço unitário do terceiro produto: ");  
      scanf("%f",&p3);      
      printf("Informe a quantidade do primeiro produto: ");  
      scanf("%d",&q1);      
      printf("Informe a quantidade do segundo produto: ");  
      scanf("%d",&q2);      
      printf("Informe a quantidade do terceiro produto: ");  
      scanf("%d",&q3);      
      vtotal=(p1*q1)+(p2*q2)+(p3*q3);
      printf("Valor total de todos os produtos = R$ %.2f\n",vtotal);                  
      system("pause");
}
      
