#include<stdlib.h>
#include<stdio.h>
main()
{
	int i;
	float numeros[10];
	
	for(i=0;i<10;i++)
	{	printf("Informe o n�mero do �ndice %d: ",i);
		scanf("%f",&numeros[i]);
	}
	
	for(i=0;i<10;i++)
	{	if(i>=5)
		{	printf("\nN�mero de �ndice %d: %.2f",i,numeros[i]);	}
	}
	
	printf("\n");
	system("pause");
}
