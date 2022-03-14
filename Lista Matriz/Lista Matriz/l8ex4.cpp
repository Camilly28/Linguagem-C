#include <stdio.h>
#include <stdlib.h>
main()
{	
	int m1[2][3],mt[3][2],i,j;

	for(i=0;i<2;i++)	
	{	for(j=0;j<3;j++)
		{	m1[i][j]=(2*i)+j;
		}
	}
	
	for(i=0;i<3;i++)	
	{	for(j=0;j<2;j++)
		{	mt[i][j]=m1[j][i];	}
	}
	
	printf("MATRIZ 1\n");
	for(i=0;i<2;i++)	
	{	for(j=0;j<3;j++)
		{	printf("M1[%d][%d] = %d\n",i,j,m1[i][j]);	}
	}

	printf("\n\nMATRIZ TRANSPOSTA\n");
	for(i=0;i<3;i++)	
	{	for(j=0;j<2;j++)
		{	printf("MT[%d][%d] = %d\n",i,j,mt[i][j]);	}
	}
	
	system("pause");
}
