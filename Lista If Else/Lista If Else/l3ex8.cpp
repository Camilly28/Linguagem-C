#include <stdio.h>
#include <stdlib.h>
main()
{ float vbase,imposto;
  printf("Informe o valor da base: ");
  scanf("%f",&vbase);
  if (vbase<=1200)
      printf("Isento!\n");
  else
    if ((vbase>=1201)&&(vbase<=3500))
       imposto = vbase*0.10;      
    else
       imposto = vbase*0.20;      
  printf("O imposto será de R$ %.2f\n",imposto);
  system("pause");
}
