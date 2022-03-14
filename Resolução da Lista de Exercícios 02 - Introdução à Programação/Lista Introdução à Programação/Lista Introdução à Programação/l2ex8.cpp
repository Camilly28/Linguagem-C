#include <stdio.h>
#include <stdlib.h>

main()
{
   char nmauto[30];
   float pfabrica,pimposto,prevendedor,pfinal;
   
   printf("Informe o nome do automóvel: ");
   scanf("%s",&nmauto);
   printf("Informe o preço de fábrica do automóvel: ");
   scanf("%f",&pfabrica);
   
   pimposto = pfabrica*0.45;
   prevendedor = pfabrica*0.28;
   pfinal = pfabrica + pimposto + prevendedor;
   
   printf("O preço final do automóvel %s é de R$ %.2f\n",nmauto,pfinal);
   
   system("pause");
}  
