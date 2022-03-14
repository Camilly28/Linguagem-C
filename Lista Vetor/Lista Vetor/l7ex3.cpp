#include <stdio.h>
#include <stdlib.h>
main()
{
	char candidatos[5][30];
	int votos[5],i,voto;
	
	for(i=0;i<=4;i++)
	{	printf("Informe o nome do candidato: ");
		scanf("%s",&candidatos[i]);
		votos[i]=0;
	}
	
	printf("\n\nESCOLHA O SEU CANDIDATO\n");
	for(i=0;i<=4;i++)
	{	printf("Aperte %d para votar no candidato %s\n",i,candidatos[i]);	}
	
	for(i=1;i<=10;i++)
	{	printf("\nInforme o número do seu candidato: ");
		scanf("%d",&voto);
		if(voto>=0 && voto<=4)
		{	votos[voto]=votos[voto]+1;	}
	}
	
	for(i=0;i<=4;i++)
	{	printf("O candidato %s teve %d votos!\n",candidatos[i],votos[i]);	}
	
	system("pause");
}
