#include <stdio.h>
#include <stdlib.h>

main()
{   int cont;
    float numero,soma,media;

    cont=0;
    soma=0;
    
    printf("Informe um número: ");
    scanf("%f",&numero);
    
    while(numero!=9999)
    {    soma=soma+numero;
         cont=cont+1;    
         printf("Informe outro número: ");
         scanf("%f",&numero);
    }
    
    media=soma/cont;
    printf("Média dos números é %f\n",media);
    system("pause");    
}
