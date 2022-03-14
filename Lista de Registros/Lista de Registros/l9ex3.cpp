/* LISTA DE REGISTROS - QUEST�O 3
   Fa�a um programa que leia os seguintes dados de 3 ve�culos: propriet�rio,
   combust�vel, modelo, marca, cor, ano, placa e n�mero do chassi. Feito isso, o
   programa dever� pedir ao usu�rio para entrar com o n�mero de um determinado
   chassi. Caso este chassi exista, o programa dever� mostrar os dados do carro
   correspondente e perguntar ao usu�rio se este deseja mudar o propriet�rio do
   ve�culo. ATEN��O: o programa s� permitir� a mudan�a de propriet�rio caso os
   n�meros da placa do ve�culo sejam diferentes de zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	struct ficha
    {	char proprietario[50];
        char combustivel[20];
        char modelo[50];
        char marca[50];
        char cor[20];
        int ano;
        char placa[7];
        char chassi[50];
    };
    struct ficha carros[3];

    int i,j,contplaca,cont=0;
    char chassi[50];
    char resp;

    for(i=0;i<3;i++)
    {   printf("Informe o propriet�rio do carro: ");
        scanf("%s",&carros[i].proprietario);
        printf("Informe o combust�vel do carro: ");
        scanf("%s",&carros[i].combustivel);        
        printf("Informe o modelo do carro: ");
        scanf("%s",&carros[i].modelo);
        printf("Informe a marca do carro: ");
        scanf("%s",&carros[i].marca);
        printf("Informe a cor do carro: ");
        scanf("%s",&carros[i].cor);
        printf("Informe o ano do carro: ");
        scanf("%d",&carros[i].ano);
        printf("Informe a placa do carro: ");
        scanf("%s",&carros[i].placa);
        printf("Informe o chassi do carro: ");
        scanf("%s",&carros[i].chassi);
    } 

    printf("Informe o n�mero de um chassi: ");
    scanf("%s",&chassi);
      
    for(i=0;i<3;i++)
    {   if (strcmp(chassi,carros[i].chassi)==0)
        {	printf("Propriet�rio: %s\n",carros[i].proprietario);
            printf("Combust�vel: %s\n",carros[i].combustivel);   
            printf("Modelo: %s\n",carros[i].modelo);   
            printf("Marca: %s\n",carros[i].marca);   
            printf("Cor: %s\n",carros[i].cor);   
            printf("Ano: %d\n",carros[i].ano);   
            printf("Placa: %s\n",carros[i].placa);   			              
        	printf("Chassi: %s\n",carros[i].chassi);
        	
			printf("Deseja alterar o nome do propriet�rio do ve�culo (S/N): ");
        	scanf("%s",&resp);
        	 
        	if(resp=='s')
        	{	contplaca=0;
			 	for(j=3;j<7;j++)
        	 	{	if(carros[i].placa[j]=='0')
        	 		{	contplaca++;	 }
				}
			 	if(contplaca!=4)
			 	{	printf("Informe o nome do novo propriet�rio do ve�culo: ");
              		scanf("%s",&carros[i].proprietario);
              		printf("Novo propriet�rio do ve�culo: %s!\n",carros[i].proprietario);
			 	}
			 	else
             	{	printf("N�o � poss�vel trocar o nome do propriet�rio do ve�culo!!! Placa inv�lida!!!");	}
				break;
          	}
		}
        else
        {	cont++;	}
	}
    if(cont==3)
    {	printf("Ve�culo n�o encontrado!!!");	}
    
    system("pause");
}
