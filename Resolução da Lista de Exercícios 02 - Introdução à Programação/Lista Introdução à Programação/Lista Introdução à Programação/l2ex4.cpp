#include <stdio.h>
#include <stdlib.h>
main()
{
      int numero1,numero2,soma,multiplicacao;
      printf("Informe o primeiro n�mero: ");
      scanf("%d",&numero1);
      printf("Informe o segundo n�mero: ");
      scanf("%d",&numero2);
      soma = numero1+numero2;
      multiplicacao = numero1*numero2;
      printf("A soma � %d\n",soma);
      printf("A multiplica��o � %d\n",multiplicacao);
      system("pause");
}     
