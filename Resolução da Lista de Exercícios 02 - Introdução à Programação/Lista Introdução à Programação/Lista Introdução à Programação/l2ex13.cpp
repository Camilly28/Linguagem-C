#include <stdio.h>
#include <stdlib.h>
main()
{
      float d1,d2,t1,t2,vm;
      printf("Informe a dist�ncia inicial: ");
      scanf("%f",&d1);
      printf("Informe a dist�ncia final: ");
      scanf("%f",&d2);
      printf("Informe o tempo inicial: ");
      scanf("%f",&t1);
      printf("Informe o tempo final: ");
      scanf("%f",&t2);
      vm=(d2-d1)/(t2-t1);
      printf("Velocidade m�dia = %.2f km/h\n",vm);                  
      system("pause");
}
      
