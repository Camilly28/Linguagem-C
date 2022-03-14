#include<stdlib.h>
#include<stdio.h>
main()
{
	int i,numeros[4];
	
	for(i=0;i<4;i++)
	{	printf("Informe o %dº número inteiro: ",i+1);
		scanf("%d",&numeros[i]);
	}
	
	for(i=3;i>=0;i--)
	{	printf("\n%dº número inteiro: %d",i+1,numeros[i]);	}
	
	printf("\n");
	system("pause");
}
