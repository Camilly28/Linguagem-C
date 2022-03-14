#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{ char operacao[1];
  float valor1,valor2,resultado;
  int op;
  printf("Informe o primeiro valor: ");
  scanf("%f",&valor1);
  printf("Informe o segundo valor: ");
  scanf("%f",&valor2);
  printf("Informe a operação desejada: ");
  scanf("%s",&operacao);
  op = strcmp(operacao,"+");         
  if (op==0)
      resultado = valor1+valor2;
  op = strcmp(operacao,"-");               
  if (op==0)
      resultado = valor1-valor2;
  op = strcmp(operacao,"*");         
  if (op==0)
      resultado = valor1*valor2;
  op = strcmp(operacao,"/");               
  if (op==0)
      resultado = valor1/valor2;
  printf("O resultado da operação de %s foi %f = \n",operacao,resultado);
  system("pause");
}
