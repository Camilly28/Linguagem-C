/* LISTA DE REGISTROS - QUESTÃO 7
   O Departamento de Trânsito do estado anotou dados de acidentes de trânsito no
   último ano. Para cada motorista envolvido em acidente, tem-se as seguintes
   informações: ano de nascimento, sexo (M/F), procedência (0 – Capital / 1 –
   interior / 2 – outro estado). Faça um programa que: a) calcule o percentual de
   motoristas com menos de 21 anos; b) calcule quantas mulheres são da capital;
   c) Calcule quantos motoristas do interior do estado tem idade maior que 60 anos;
   d) Verifique se existe alguma mulher com idade maior que 60 anos.
*/

#include<stdlib.h>
#include<stdio.h>

main()
{
	int n;
	printf("Informe a quantidade de motoristas: ");
	scanf("%d",&n);
	
	struct ficha
	{	int ano;
		char sexo;
		int procedencia;
	};
	struct ficha motoristas[n];

	int i,cont21,contf0,cont160,contf60;
	float perc21;
	
	cont21=0;
	contf0=0;
	cont160=0;
	contf60=0;
	
	for(i=0;i<n;i++)
	{	printf("Informe o ano de nascimento: ");
		scanf("%d",&motoristas[i].ano);
		printf("Informe o sexo (m/f): ");
		scanf("%s",&motoristas[i].sexo);
		printf("Informe a procedência (0 - Capital / 1- Interior / 2 - Outro Estado): ");
		scanf("%d",&motoristas[i].procedencia);
	}
	
	for(i=0;i<n;i++)
	{	if((2021-motoristas[i].ano)<21)
		{	cont21++;	}
		if((motoristas[i].sexo=='f') && (motoristas[i].procedencia==0))
		{	contf0++;	}
		if(motoristas[i].procedencia==1 && (2021-motoristas[i].ano>60))
		{	cont160++;	}
		if((motoristas[i].sexo=='f') && (2021-motoristas[i].ano>60))
		{	contf60++;		}
	}
	
	perc21=((float)cont21/n)*100;
	printf("\nPercentual de motoristas com menos de 21 anos = %.2f %%\n",perc21);
	printf("\nQuantidade de motoristas mulheres que são da capital = %d\n",contf0);
	printf("\nQuantidade de motoristas do interior com mais de 60 anos = %d\n",cont160);
	if(contf60>0)
	{	printf("\nExistem %d mulher(es) com mais de 60 anos!\n",contf60);	}
	else
	{	printf("Não existem mulheres com mais de 60 anos!\n");	}
}
