#include <stdio.h>
#include <stdlib.h>
main()
{
	char candidatos[5][30];
	int votos[6],i,voto;
	
	for(i=0;i<=4;i++)
	{	printf("Informe o nome do candidato: ");
		scanf("%s",&candidatos[i]);
		votos[i]=0;
	}
	votos[5]=0;
	
	printf("\n\nESCOLHA O SEU CANDIDATO\n");
	for(i=0;i<=4;i++)
	{	printf("Aperte %d para votar no candidato %s",i,candidatos[i]);	}
	
	for(i=1;i<=10;i++)
	{	printf("\nInforme o número do seu candidato: ");
		scanf("%d",&voto);
		if(voto>=0 && voto<=4)
		{	votos[voto]=votos[voto]+1;	}
		else
		{	votos[5]=votos[5]+1;	}
	}
	
	for(i=0;i<=4;i++)
	{	printf("\nO candidato %s teve %d votos!",candidatos[i],votos[i]);	}
	printf("Votos brancos e nulos = %d\n",votos[5]);
	
	system("pause");
}
