#include <stdio.h>
#include <stdlib.h>

main()
{
    int idade;
    
    printf("Informe uma idade: ");
    scanf("%d",&idade);
    
    switch(idade)
    { case 0 ... 3: 
           printf("Beb�\n");
           break;
      case 4 ... 10:
           printf("Crian�a\n");
           break;              
      case 11 ... 18:
           printf("Adolescente\n");
           break;                         
      default:
           printf("Adulto\n");           
    }
    system("pause");
}
  
