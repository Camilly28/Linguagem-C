#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{     char letra[10];
      int conta,conte,conti,conto,contu,teste,resultado;
      
      conta=0;
      conte=0;
      conti=0;            
      conto=0;            
      contu=0;
      
      do
      {   printf("Informe uma letra: ");
          scanf("%s",&letra);
          resultado = strcmp(letra,"z");                  

          teste = strcmp(letra,"a");
          if (teste==0)
             {conta=conta+1;}
          
          teste = strcmp(letra,"e");
          if (teste==0)
             {conte=conte+1;}
          
          teste = strcmp(letra,"i");
          if (teste==0)
             {conti=conti+1;}

          teste = strcmp(letra,"o");
          if (teste==0)
             {conto=conto+1;}
             
          teste = strcmp(letra,"u");
          if (teste==0)
             {contu=contu+1;}
             
         } while(resultado!=0);

         printf("Quantidade de vogal a = %d\n",conta);
         printf("Quantidade de vogal e = %d\n",conte);
         printf("Quantidade de vogal i = %d\n",conti);
         printf("Quantidade de vogal o = %d\n",conto);         
         printf("Quantidade de vogal u = %d\n",contu);         
         system("pause");
}
