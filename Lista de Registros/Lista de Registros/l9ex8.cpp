/* LISTA DE REGISTROS - QUESTÃO 8
   Faça um programa que calcule o salário líquido e o imposto de renda de um
   grupo de 10 pessoas, considerando que: a) para cada pessoa tem-se: nome,
   número de dependentes, renda bruta anual; b) há um desconto de R$ 600,00
   para cada dependente; c) a renda líquida é igual a renda bruta menos o
   abatimento de cada dependente. e) o imposto é calculado segundo a tabela
   abaixo: RENDA LÍQUIDA PERCENTUAL
   Até R$ 10.000,00 isento
   10.000,00 < > 30.000,00 5%
   30.000,00 < > 60.000,00 10%
   Acima de 60.000,00 15%
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    struct ficha
    {	
		char nome[50];
        int numdep;
        float rbruta;
    };
    struct ficha pessoas[10];
	
    int i;
	float rliquida,imposto;
      
    for(i=0;i<10;i++)
    {   printf("Informe o nome da pessoa: ");
        scanf("%s",&pessoas[i].nome);
        printf("Informe o número de dependentes: ");
        scanf("%d",&pessoas[i].numdep);        
        printf("Informe a renda bruta: ");
        scanf("%f",&pessoas[i].rbruta);
        printf("\n\n");
    } 
    
    for(i=0;i<10;i++)
    {   rliquida = pessoas[i].rbruta - (pessoas[i].numdep*600);
    	printf("Renda líquida de %s = R$ %.2f\n",pessoas[i].nome,rliquida);
    	if(rliquida<=10000)
    	{	imposto=0;	}
    	else if(rliquida>10000 && rliquida<=30000)
    	{	imposto=pessoas[i].rbruta*0.05;	}
    	else if(rliquida>30000 && rliquida<=60000)
    	{	imposto=pessoas[i].rbruta*0.10;	}
    	else
    	{	imposto=pessoas[i].rbruta*0.15;	}   	
   		printf("Imposto a ser pago = R$ %.2f\n",imposto);
    }

    system("pause");
}
