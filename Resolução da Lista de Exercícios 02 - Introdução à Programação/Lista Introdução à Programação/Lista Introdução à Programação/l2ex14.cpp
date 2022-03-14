#include <stdio.h>
#include <stdlib.h>
main()
{
      float precokg,peso,totalpago;
      printf("Informe o preço por Kg do produto: ");
      scanf("%f",&precokg);
      printf("Informe o peso do produto: ");
      scanf("%f",&peso);      
      totalpago = precokg * peso;
      printf("O total a ser pago é de R$ %.2f\n",totalpago);
      system("pause");
}
      
