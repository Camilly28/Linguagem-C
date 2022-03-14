/* LISTA DE REGISTROS - QUESTÃO 3
   Faça um programa que leia os seguintes dados de 3 veículos: proprietário,
   combustível, modelo, marca, cor, ano, placa e número do chassi. Feito isso, o
   programa deverá pedir ao usuário para entrar com o número de um determinado
   chassi. Caso este chassi exista, o programa deverá mostrar os dados do carro
   correspondente e perguntar ao usuário se este deseja mudar o proprietário do
   veículo. ATENÇÃO: o programa só permitirá a mudança de proprietário caso os
   números da placa do veículo sejam diferentes de zero.
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
    {   printf("Informe o proprietário do carro: ");
        scanf("%s",&carros[i].proprietario);
        printf("Informe o combustível do carro: ");
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

    printf("Informe o número de um chassi: ");
    scanf("%s",&chassi);
      
    for(i=0;i<3;i++)
    {   if (strcmp(chassi,carros[i].chassi)==0)
        {	printf("Proprietário: %s\n",carros[i].proprietario);
            printf("Combustível: %s\n",carros[i].combustivel);   
            printf("Modelo: %s\n",carros[i].modelo);   
            printf("Marca: %s\n",carros[i].marca);   
            printf("Cor: %s\n",carros[i].cor);   
            printf("Ano: %d\n",carros[i].ano);   
            printf("Placa: %s\n",carros[i].placa);   			              
        	printf("Chassi: %s\n",carros[i].chassi);
        	
			printf("Deseja alterar o nome do proprietário do veículo (S/N): ");
        	scanf("%s",&resp);
        	 
        	if(resp=='s')
        	{	contplaca=0;
			 	for(j=3;j<7;j++)
        	 	{	if(carros[i].placa[j]=='0')
        	 		{	contplaca++;	 }
				}
			 	if(contplaca!=4)
			 	{	printf("Informe o nome do novo proprietário do veículo: ");
              		scanf("%s",&carros[i].proprietario);
              		printf("Novo proprietário do veículo: %s!\n",carros[i].proprietario);
			 	}
			 	else
             	{	printf("Não é possível trocar o nome do proprietário do veículo!!! Placa inválida!!!");	}
				break;
          	}
		}
        else
        {	cont++;	}
	}
    if(cont==3)
    {	printf("Veículo não encontrado!!!");	}
    
    system("pause");
}
