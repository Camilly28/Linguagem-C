#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{ char resposta[3];
  char nome[50];
  float preco,percentual;
  int resultado;
  printf("Informe o nome do produto: ");
  scanf("%s",&nome);
  printf("Informe o preço do produto: ");
  scanf("%f",&preco);
  printf("O produto tem desconto <sim/nao>? ");
  scanf("%s",&resposta);
  resultado = strcmp(resposta,"sim");         
  if (resultado==0)
  {   printf("Informe o percentual de desconto: ");
      scanf("%f",&percentual);
      preco=preco-(preco*(percentual/100));
  }
  printf("O preço atual do produto é R$ %.2f\n",preco);
  system("pause");
}
