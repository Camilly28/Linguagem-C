/* LISTA DE REGISTROS - QUESTÃO 2
   Faça um programa que leia 10 fichas de aluno contendo nome e idade.
   Ao final, o programa deverá mostrar a quantidade e o percentual de
   alunos cuja idade é maior que 18.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{	struct ficha
	{      char nome[50];
           int idade;
	};
	struct ficha alunos[10];		
	
	int i,cont=0;
	float percentual;
	
    for (i=0;i<10;i++)
	{	printf("Informe o nome do aluno: ");
		scanf("%s",&alunos[i].nome);
		printf("Informe a idade do aluno: ");
		scanf("%d",&alunos[i].idade);
		if(alunos[i].idade>=18)
		   cont = cont +1;
	}
	percentual=((float)cont/10)*100;
	printf("Quantidade de alunos maiores de idade = %d\n",cont);       
	printf("Percentual de alunos maiores de idade = %.2f%%\n",percentual);       
	system("pause");
}
