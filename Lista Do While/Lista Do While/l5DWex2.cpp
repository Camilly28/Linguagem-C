#include <stdio.h>
#include <stdlib.h>

main()
{   int cont;
    float numero,soma,media;

    cont=0;
    soma=0;  
    
    do
    {   printf("Informe um n�mero: ");
        scanf("%f",&numero);
        soma=soma+numero;
        cont=cont+1;    
    }while(numero!=9999);
    
    media=(soma-9999)/(cont-1);
    printf("M�dia dos n�meros � %f\n",media);
    system("pause");    
}
