#include <stdio.h>
#include <stdlib.h>

main()
{   float numero,resultado;

    printf("Informe um n�mero: ");
    scanf("%f",&numero);
    resultado=numero/2; 

    while(resultado>=1)
        resultado=resultado/2;    

    printf("Resultado da �ltima divis�o = %f\n",resultado);
    system("pause");
}
