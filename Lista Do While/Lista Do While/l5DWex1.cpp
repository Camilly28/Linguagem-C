#include <stdio.h>
#include <stdlib.h>

main()
{   float numero,resultado;

    printf("Informe um número: ");
    scanf("%f",&numero);
    resultado=numero; 

    do
    {    resultado=resultado/2;     }     
    while(resultado>=1);

    printf("Resultado da última divisão = %f\n",resultado);
    system("pause");
}
