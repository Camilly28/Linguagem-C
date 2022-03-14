#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
      int numero,dobro;
	  float quadrado;
      printf("Informe um número: ");
      scanf("%d",&numero);
      dobro = 2*numero;
      quadrado = pow(numero,2);
      printf("O dobro de %d é %d\n",numero,dobro);
      printf("O quadrado de %d é %.2f\n",numero,quadrado);
      system("pause");
}     
