/* LISTA DE REGISTROS - QUESTÃO 1
   Faça um programa que armazene as informações de 5 alunos dadas por
   matrícula, nome, curso e período. Ao final, o programa deverá permitir a
   visualização das informações de um determinado aluno a partir da sua matrícula.
*/

#include <stdio.h>
#include <stdlib.h>	
#include <string.h>	

main()
{	struct ficha
	{      char matricula[10];
	       char nome[50];
	       char curso[20];
	       char periodo[3];
	};
	struct ficha alunos[5];
	
	int i,cont=0;
	char matr[10];
	
    for (i=0;i<5;i++)
	{	printf("Informe a matricula do aluno: ");
		scanf("%s",&alunos[i].matricula);
		printf("Informe o nome do aluno: ");
		scanf("%s",&alunos[i].nome);
		printf("Informe o curso do aluno: ");
		scanf("%s",&alunos[i].curso);
		printf("Informe o período do aluno: ");
		scanf("%s",&alunos[i].periodo);
    }
    
    printf("Informe uma matrícula qualquer: ");
	scanf("%s",&matr);

    for (i=0;i<5;i++)
	{	if (strcmp(alunos[i].matricula,matr)==0)
        {   printf("Aluno encontrado!\n");
            printf("Matrícula: %s\n",alunos[i].matricula);
            printf("Nome: %s\n",alunos[i].nome);            
            printf("Curso: %s\n",alunos[i].curso);            
            printf("Período: %s\n",alunos[i].periodo);
            break;
        }
        else
        { cont++; }
    }

    if(cont==5)
    { printf("Aluno não encontrado!\n"); }
		
	system("pause");
}
