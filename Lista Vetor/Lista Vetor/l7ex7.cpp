#include<stdio.h>
#include<stdlib.h>
main()
{
	float numeros[10],numero;
	int i,cont=0;
	
	for(i=0;i<10;i++)
	{	printf("Informe um número qualquer: ");
		scanf("%f",&numeros[i]);
	}
	
	printf("Informe o número a ser localizado: ");
	scanf("%f",&numero);
	
	for(i=0;i<10;i++)
	{	if(numeros[i]==numero)
		{	printf("Número encontrado na posição %d\n",i);
			break;
		}
		else
		{	cont++;	}
	}
	
	if(cont==10)
	{	printf("Número não encontrado!\n");	}
	
	system("pause");
}
