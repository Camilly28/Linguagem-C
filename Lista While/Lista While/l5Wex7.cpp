#include <stdio.h>
#include <stdlib.h>
#include <string>
main()
{
     char nome[50];
     int teste,testecampos,habitantes,maior,contcidade,contcampos;
     
     contcidade=0;
     contcampos=0;
     maior=0;
     
     printf("Informe o nome da cidade: ");
     scanf("%s",&nome);
     
     teste=strcmp(nome,"fim");
     
     while(teste!=0)
     {
          printf("Informe o n�mero de habitantes: ");
          scanf("%d",&habitantes);
          contcidade=contcidade+1;

          if (habitantes>maior)
          { maior=habitantes;  }

          testecampos=strcmp(nome,"campos");
          if (testecampos==0)
          { contcampos=contcampos+1; }

          printf("Informe o nome da cidade: ");
          scanf("%s",&nome);
          teste=strcmp(nome,"fim");
     }
      
      printf("O n�mero de cidades informadas foi de %d\n",contcidade);
      printf("O n�mero de cidade campos informada foi de %d\n",contcampos);
      printf("A maior popula��o � de %d\n",maior);      
      
      system("pause");
      
}
