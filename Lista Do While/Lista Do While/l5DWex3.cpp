#include <stdio.h>
#include <stdlib.h>

main()
{   float n1,n2;

    printf("Informe um n�mero: ");
    scanf("%f",&n1);
    printf("N�mero a ser descoberto = %f\n",n1);
    
    do
    {   printf("Informe outro n�mero: ");
        scanf("%f",&n2);
        printf("Tentativa de acerto = %f\n",n2);        
    }while(n1!=n2);

    system("pause");    
}
