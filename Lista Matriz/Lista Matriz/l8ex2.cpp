#include<stdio.h>
#include<stdlib.h>
main()
{
	int matriz[10][30][3],i,j,z;
	
	for(i=0;i<10;i++)
	{	for(j=0;j<30;j++)
		{	for(z=0;z<3;z++)
			{	matriz[i][j][z]=i+j+z;	}
		}
	}
	
	for(i=0;i<10;i++)
	{	for(j=0;j<30;j++)
		{	for(z=0;z<3;z++)
			{	printf("M[%d][%d][%d] = %d\n",i,j,z,matriz[i][j][z]);	}
		}
	}
	
	system("pause");
}
