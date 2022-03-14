#include <stdio.h>
#include <stdlib.h>
main()
{	

	int m1[3][3],m2[3][3],soma[3][3],subtracao[3][3],i,j;

	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{	printf("Informe o elemento M1[%d][%d]: ",i,j);
			scanf("%d",&m1[i][j]);
			printf("Informe o elemento M2[%d][%d]: ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{	soma[i][j]=m1[i][j]+m2[i][j];
			subtracao[i][j]=m1[i][j]-m2[i][j];
		}
	}

	printf("\nMATRIZ 1");
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{	printf("\nM1[%d][%d]= %d",i,j,m1[i][j]);	}
	}
	
	printf("\nMATRIZ 2");
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{	printf("\nM2[%d][%d]= %d",i,j,m2[i][j]);	}
	}
	
	printf("\nMATRIZ SOMA");
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{	printf("\nSOMA[%d][%d]= %d",i,j,soma[i][j]);	}
	}
	
	printf("\nMATRIZ SUBTRAÇÃO");
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{	printf("\nSUBTRAÇÃO[%d][%d]= %d",i,j,subtracao[i][j]);	}
	}
	
	system("pause");
}
