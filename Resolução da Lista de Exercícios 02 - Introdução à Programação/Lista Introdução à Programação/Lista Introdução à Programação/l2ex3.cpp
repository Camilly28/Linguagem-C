#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
      int numero,dobro;
	  float quadrado;
      printf("Informe um n�mero: ");
      scanf("%d",&numero);
      dobro = 2*numero;
      quadrado = pow(numero,2);
      printf("O dobro de %d � %d\n",numero,dobro);
      printf("O quadrado de %d � %.2f\n",numero,quadrado);
      system("pause");
}     
