#include <stdio.h>
#include <stdlib.h>
main()
{ int ano,idade;
  float preco,imposto;
  printf("Informe o ano do carro: ");
  scanf("%d",&ano);
  printf("Informe o preço do carro: ");
  scanf("%f",&preco);
  idade = 2012-ano;
  if (idade<=10)
      imposto = preco*0.03;
  else
      imposto = preco*0.02;      
  printf("O imposto será de R$ %.2f\n",imposto);
  system("pause");
}
