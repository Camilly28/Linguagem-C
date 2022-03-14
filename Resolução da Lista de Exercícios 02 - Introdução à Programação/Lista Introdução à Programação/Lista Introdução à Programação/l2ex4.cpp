#include <stdio.h>
#include <stdlib.h>
main()
{
      int numero1,numero2,soma,multiplicacao;
      printf("Informe o primeiro número: ");
      scanf("%d",&numero1);
      printf("Informe o segundo número: ");
      scanf("%d",&numero2);
      soma = numero1+numero2;
      multiplicacao = numero1*numero2;
      printf("A soma é %d\n",soma);
      printf("A multiplicação é %d\n",multiplicacao);
      system("pause");
}     
