#include<stdio.h>
#include<stdlib.h>
main()
{	
	float matriz[5][20];
	int i,j;
	
	for(i=0;i<5;i++)
	{	for(j=0;j<20;j++)
		{	printf("Informe um número: ");
			scanf("%f",&matriz[i][j]);
		}
	}
	
	for(j=0;j<20;j++)
	{	for(i=0;i<5;i++)
		{	printf("M[%d][%d] = %.2f\n",j,i,matriz[i][j]);
		}
	}
	
	system("pause");
}
