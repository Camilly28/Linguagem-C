/* LISTA DE REGISTROS - QUEST�O 1
   Fa�a um programa que armazene as informa��es de 5 alunos dadas por
   matr�cula, nome, curso e per�odo. Ao final, o programa dever� permitir a
   visualiza��o das informa��es de um determinado aluno a partir da sua matr�cula.
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
		printf("Informe o per�odo do aluno: ");
		scanf("%s",&alunos[i].periodo);
    }
    
    printf("Informe uma matr�cula qualquer: ");
	scanf("%s",&matr);

    for (i=0;i<5;i++)
	{	if (strcmp(alunos[i].matricula,matr)==0)
        {   printf("Aluno encontrado!\n");
            printf("Matr�cula: %s\n",alunos[i].matricula);
            printf("Nome: %s\n",alunos[i].nome);            
            printf("Curso: %s\n",alunos[i].curso);            
            printf("Per�odo: %s\n",alunos[i].periodo);
            break;
        }
        else
        { cont++; }
    }

    if(cont==5)
    { printf("Aluno n�o encontrado!\n"); }
		
	system("pause");
}
