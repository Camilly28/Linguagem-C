#include<stdlib.h>
#include<stdio.h>
main()
{
/*Fa�a um programa que leia as notas P1 e P2 de 5 alunos,
calcule as m�dias de cada um deles, armazene-as e
mostre-as na tela.
*/	
	float p1,p2,medias[5];
	int i=0;
	
	for(i=0;i<5;i++)
	{	printf("Informe a %d� nota da P1: ",i+1);
		scanf("%f",&p1);
		printf("Informe a %d� nota da P2: ",i+1);
		scanf("%f",&p2);
		medias[i]=(p1+p2)/2;
	}
	
	for(i=0;i<5;i++)
	{	printf("\n%d� m�dia = %.2f",i+1,medias[i]);	}
	
	printf("\n");	
	system("pause");
}
