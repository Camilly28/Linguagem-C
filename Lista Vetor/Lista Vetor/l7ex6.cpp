#include<stdio.h>
#include<stdlib.h>
main()
{
	float alturas[10],maior=0,menor=3;
	int i;
	
	for(i=0;i<10;i++)
	{	printf("Informe uma altura: ");
		scanf("%f",&alturas[i]);
		if(alturas[i]>maior)
		{	maior=alturas[i];	}
		if(alturas[i]<menor)
		{	menor=alturas[i];	}
	}
	
	for(i=0;i<10;i++)
	{	printf("\n%dª altura = %.2f",i+1,alturas[i]);	}
	
	printf("\n\nMaior altura = %.2f",maior);
	printf("\nMenor altura = %.2f\n",menor);
	
	system("pause");
}
