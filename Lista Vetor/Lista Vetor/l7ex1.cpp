#include<stdlib.h>
#include<stdio.h>
main()
{	
	char nomes[20][50];
	int i;
	
	for(i=0;i<20;i++)
	{	printf("Informe o %d� nome: ",i+1);
		scanf("%s",&nomes[i]);
	}
	
	for(i=0;i<20;i++)
	{	printf("\n%d� nome: %s",i+1,nomes[i]);	}
	
	printf("\n");
	system("pause");
}
