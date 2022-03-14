/* LISTA DE REGISTROS - QUESTÃO 6
   Um hotel cobra R$ 300,00 por diária e mais uma taxa adicional de serviços. Se o
   número de diárias por pessoa for menor que 15, a taxa de serviços é de R$
   20,00. Se o número de diárias por pessoa for igual a 15, a taxa de serviço é de
   R$ 14,00. E se o número de diárias por pessoa for maior que 15, a taxa de
   serviço é de R$ 12,00. Considere que o hotel tem 15 pessoas hospedadas e para
   cada uma delas tem-se um registro contendo nome e número de diárias. Faça um
   programa que imprima o nome e o total a pagar de cada pessoa, o total ganho
   pelo hotel e o número total de diárias.
*/

#include <stdio.h>
#include <stdlib.h>

struct ficha
{	char nome[30];
  	int diarias;
};
struct ficha hospedes[15];

main()
{	
	float taxa,vthospede,vthotel=0;
    int somadiarias=0;
      
	for(int i=0; i<15; i++)
    {   printf("Informe o nome: ");
        scanf("%s",&hospedes[i].nome);
        printf("Informe o número de diárias: ");
        scanf("%d",&hospedes[i].diarias);
        if(hospedes[i].diarias<15)
			taxa=20.00;
        else if(hospedes[i].diarias==15)   
			taxa=14.00;
		else
        	taxa=12.00;
    	vthospede = hospedes[i].diarias*(300+taxa);
        printf("A conta total do hospede %s é de R$ %.2f!\n",hospedes[i].nome,vthospede);
        vthotel = vthotel + vthospede;
        somadiarias = somadiarias + hospedes[i].diarias;
    }
          
    printf("Valor total arrecadado pelo hotel = R$ %.2f!\n",vthotel);
    printf("Número total de diárias dos hospedes do hotel = %d dias!\n",somadiarias);
    system("pause");
}
