#include <stdio.h>
#include <stdlib.h>

main()
{
    char ecivil;
    
    printf("Informe um estado civil: ");
    scanf("%c",&ecivil);
    
    switch(ecivil)
    { case 'S': 
           printf("Solteiro\n");
           break;
      case 'C':
           printf("Casado\n");
           break;              
      case 'D':
           printf("Divorciado\n");
           break;                         
      case 'V':
           printf("Vi�vo\n");
           break;                         
      default:
           printf("Estado civil inv�lido\n");           
    }
    system("pause");
}
  
