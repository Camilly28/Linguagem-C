#include <stdio.h>
#include <stdlib.h>

main()
{   int cont;
    float numero,soma,media;

    cont=0;
    soma=0;
    
    printf("Informe um n�mero: ");
    scanf("%f",&numero);
    
    while(numero!=9999)
    {    soma=soma+numero;
         cont=cont+1;    
         printf("Informe outro n�mero: ");
         scanf("%f",&numero);
    }
    
    media=soma/cont;
    printf("M�dia dos n�meros � %f\n",media);
    system("pause");    
}
