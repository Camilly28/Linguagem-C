/* LISTA DE REGISTROS - QUESTÃO5 
   Dado que cada pessoa tem seu nome, idade e peso em uma ficha, faça um
   programa que leia um número inteiro N de fichas e: a) imprima o nome da pessoa
   cuja idade está na faixa de 20 a 30 anos; b) calcule a idade média das pessoas
   com peso maior que 80Kg.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{     
	int n;
	printf("Informe o número de pessoas: ");
	scanf("%d",&n);
	
    struct ficha
    {   char nome[30];
        int idade;
        float peso;
    };     
    struct ficha pessoas[n];
      
    int i,cont=0;
    float soma=0;
      
    for(i=0;i<n;i++)
    {   printf("\nInforme o nome: ");
        scanf("%s",&pessoas[i].nome);
        printf("Informe a idade: ");
        scanf("%d",&pessoas[i].idade);
        printf("Informe o peso: ");
        scanf("%f",&pessoas[i].peso);
        if(pessoas[i].peso>80)
        {  soma=soma+pessoas[i].idade;
           cont++;
        }         
    }
      
    for(i=0;i<n;i++)
    {   if((pessoas[i].idade>=20)&&(pessoas[i].idade<=30))
        {  printf("A pessoa %s tem idade entre 20 e 30 anos!\n",pessoas[i].nome);  }
    }    
      
    printf("Média das idades das pessoas acima de 80kg = %.2f\n",soma/cont);
    system("pause");
}
