#include <stdio.h>
#include <stdlib.h>

main()
{ char nome[50];
  int nfilhos,nsalarios,nhextras;
  float sb,sf,sl,dinss,dirpf,vhextras,abono;
  printf("Informe o nome do funcionário: ");
  scanf("%s",&nome);
  printf("Informe o número de filhos: ");
  scanf("%d",&nfilhos);
  printf("Informe o número de salários mínimos: ");
  scanf("%d",&nsalarios);
  printf("Informe o número de horas extras: ");
  scanf("%d",&nhextras);
  sb=200*nsalarios;
  sf=nfilhos*23.45;
  if (sb>=360)
     dinss=sb*(7.82/100);
  else   
     dinss=sb*(6.62/100);
  if (sb>280)
     dirpf=sb*(9/100);
  else   
     dirpf=sb*(7/100);
  if (sb>=750)
     vhextras=nhextras*10;
  else   
     vhextras=nhextras*7;
  abono=sb*0.12;
  sl = sb+sf+vhextras+abono-(dinss+dirpf);
  printf("Salário bruto = R$ %.2f\n",sb);
  printf("Salário família = R$ %.2f\n",sf);
  printf("Desconto INSS = R$ %.2f\n",dinss);  
  printf("Desconto IRPF = R$ %.2f\n",dirpf);    
  printf("Valor das horas extras = R$ %.2f\n",vhextras);    
  printf("Abono R$ = R$ %.2f\n",abono);    
  printf("Salário líquido = R$ %.2f\n",sl);  
  system("pause");
}
