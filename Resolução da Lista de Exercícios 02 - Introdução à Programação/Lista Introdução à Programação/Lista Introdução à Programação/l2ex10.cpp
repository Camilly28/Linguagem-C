#include <stdio.h>
#include <stdlib.h>
#include<math.h>
main()
{
      float n1,n2,p1,p2,ma,mp,mg;
      printf("Informe a primeira nota: ");
      scanf("%f",&n1);
      printf("Informe a segunda nota: ");
      scanf("%f",&n2);
      printf("Informe o primeiro peso: ");
      scanf("%f",&p1);
      printf("Informe o segundo peso: ");
      scanf("%f",&p2);
      ma=(n1+n2)/2;
      mp=((n1*p1)+(n2*p2))/(p1+p2);
      mg=sqrt(n1*n2);    
      printf("Média aritmética = %.2f\n",ma);      
      printf("Média ponderada = %.2f\n",mp);      
      printf("Média geométrica = %.2f\n",mg);                  
      system("pause");
}
      
