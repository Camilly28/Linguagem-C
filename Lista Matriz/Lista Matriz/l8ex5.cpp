#include<stdio.h>
#include<stdlib.h>
main()
{	
	float m[3][4],mr[3][4];
	int i,j;
	float k;
	
	printf("Informe um número: ");
	scanf("%f",&k);
		
	printf("\n\nPreenchimento da matriz:\n");
	for(i=0;i<3;i++)
	{	for(j=0;j<4;j++)
		{	printf("Informe um número: ");
			scanf("%f",&m[i][j]);
			mr[i][j]=k*m[i][j];
		}
	}
	
	printf("\n\nMatriz informada\n");
	for(i=0;i<3;i++)
	{	for(j=0;j<4;j++)
		{	printf("M[%d][%d] = %.2f\n",i,j,m[i][j]);	}
	}

	printf("\n\nMatriz resultante:\n");
	for(i=0;i<3;i++)
	{	for(j=0;j<4;j++)
		{	printf("MR[%d][%d] = %.2f\n",i,j,mr[i][j]);	}
	}
	
	system("pause");
}
