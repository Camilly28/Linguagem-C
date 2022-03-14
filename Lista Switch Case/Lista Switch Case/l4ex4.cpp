#include <stdio.h>
#include <stdlib.h>

main()
{
    int resultado,numero;
    
    printf("Informe um número inteiro: ");
    scanf("%d",&numero);
    resultado = numero % 2;
    
    switch(resultado)
    { case 0: 
           printf("Par\n");
           break;
      case 1:
           printf("Ímpar\n");
           break;              
    }
    system("pause");
}
  
