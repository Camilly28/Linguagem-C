#include<stdio.h>
#include<stdlib.h>
main()
{
	float numeros[10],numero;
	int i,cont=0;
	
	for(i=0;i<10;i++)
	{	printf("Informe um n�mero qualquer: ");
		scanf("%f",&numeros[i]);
	}
	
	printf("Informe o n�mero a ser localizado: ");
	scanf("%f",&numero);
	
	for(i=0;i<10;i++)
	{	if(numeros[i]==numero)
		{	printf("N�mero encontrado na posi��o %d\n",i);
			break;
		}
		else
		{	cont++;	}
	}
	
	if(cont==10)
	{	printf("N�mero n�o encontrado!\n");	}
	
	system("pause");
}
