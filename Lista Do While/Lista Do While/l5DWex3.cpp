#include <stdio.h>
#include <stdlib.h>

main()
{   float n1,n2;

    printf("Informe um número: ");
    scanf("%f",&n1);
    printf("Número a ser descoberto = %f\n",n1);
    
    do
    {   printf("Informe outro número: ");
        scanf("%f",&n2);
        printf("Tentativa de acerto = %f\n",n2);        
    }while(n1!=n2);

    system("pause");    
}
