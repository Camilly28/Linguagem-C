#include <stdio.h>
#include <stdlib.h>

main()
{
   char nmauto[30];
   float pfabrica,pimposto,prevendedor,pfinal;
   
   printf("Informe o nome do autom�vel: ");
   scanf("%s",&nmauto);
   printf("Informe o pre�o de f�brica do autom�vel: ");
   scanf("%f",&pfabrica);
   
   pimposto = pfabrica*0.45;
   prevendedor = pfabrica*0.28;
   pfinal = pfabrica + pimposto + prevendedor;
   
   printf("O pre�o final do autom�vel %s � de R$ %.2f\n",nmauto,pfinal);
   
   system("pause");
}  
