#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
      char nome[10],sobrenome[10],completo;
      printf("Informe o nome: ");
      scanf("%s",&nome);
      printf("Informe o sobrenome: ");
      scanf("%s",&sobrenome);
      printf("Nome completo = %s\n",strcat(nome,sobrenome));  //strcat = string concat = concatena��o de strings = uni�o/jun��o de cadeia de caracteres    
      system("pause");
}
      
