#include <stdio.h>
#include <stdlib.h>

main()
{
    int nota;
    
    printf("Informe uma nota entre 0 e 100: ");
    scanf("%d",&nota);
    
    switch(nota)
    { case 0 ... 49: 
           printf("Conceito D\n");
           break;
      case 50 ... 69:
           printf("Conceito C\n");
           break;              
      case 70 ... 89:
           printf("Conceito B\n");
           break;                         
      case 90 ... 100:
           printf("Conceito A\n");
           break;              
      default:
              printf("Nota inválida!\n");           
    }
    system("pause");
}
  
