#include <stdio.h>
#include <stdlib.h>
main()
{
      int n1,n2,resto,divisao;
      printf("Informe o numerador: ");
      scanf("%d",&n1);
      printf("Informe o denominador <diferente de zero>: ");
      scanf("%d",&n2);
      resto = n1 % n2;
      divisao = n1 / n2;
      printf("Resto da divisão = %d\n",resto);
      printf("Resultado da divisão = %d\n",divisao);      
      system("pause");
}
      
