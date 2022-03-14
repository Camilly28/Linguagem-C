/* LISTA DE REGISTROS - QUESTÃO 4
   Dado o modelo, ano de fabricação, cor e placa de 8 carros, faça um programa
   que: a) imprima quantos são da cor verde e o percentual em relação ao total; b)
   imprima quantos foram fabricados antes de 1990 e o percentual em relação ao
   total; c) imprima quantos são CORSA e o percentual em relação ao total;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    struct ficha
    {	char modelo[50];
        int ano;
        char cor[20];
        char placa[10];
    };
    struct ficha carros[8];

	
    int i;
	int contverde=0;
	int cont1990=0;
	int contcorsa=0;
      
    for(i=0;i<8;i++)
    {   printf("Informe o modelo do carro: ");
        scanf("%s",&carros[i].modelo);
        printf("Informe o ano de fabricação do carro: ");
        scanf("%d",&carros[i].ano);        
        printf("Informe a cor do carro: ");
        scanf("%s",&carros[i].cor);
        printf("Informe a placa do carro: ");
        scanf("%s",&carros[i].placa);
        printf("\n\n");
    } 
    
    for(i=0;i<8;i++)
    {   if (strcmp(carros[i].cor,"verde")==0)
        {  	contverde++;	}
        if(carros[i].ano<=1990)
        {	cont1990++;	}
    	if (strcmp(carros[i].modelo,"corsa")==0)
        {   contcorsa++;	}
    }

	printf("Quantidade de carros verdes = %d\n",contverde);
	printf("Percentual de carros verdes = %.2f%%\n",((float)contverde/8)*100);
	printf("Quantidade de carros fabricados antes de 1990 = %d\n",cont1990);
	printf("Percentual de carros fabricados antes de 1990 = %.2f%%\n",((float)cont1990/8)*100);
	printf("Quantidade de carros do modelo corsa = %d\n",contcorsa);
	printf("Percentual de carros do modelo corsa = %.2f%%\n",((float)contcorsa/8)*100);

    system("pause");
}
