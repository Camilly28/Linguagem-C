#include <stdio.h>
#include <stdlib.h>
main()
{
      float sb,vdinss,vdirpf,sl;      
      printf("Informe o valor do salário bruto: ");
      scanf("%f",&sb);
      printf("Informe o valor do desconto do INSS: ");
      scanf("%f",&vdinss);
      printf("Informe o valor do desconto do IRPF: ");
      scanf("%f",&vdirpf);
      sl = sb - vdinss - vdirpf;
      printf("O valor do salário líquido é de R$ %.2f \n",sl);
      system("pause");
}      
      
      
