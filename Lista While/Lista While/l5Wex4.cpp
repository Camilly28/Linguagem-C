#include <stdio.h>
#include <stdlib.h>

main()
{   int n,cont;
    float numero,soma;

    cont=0;
    printf("Informe o tamanho da lista: ");
    scanf("%d",&n);
    
    while(cont<n)
    {    printf("Informe um n�mero: ");
         scanf("%f",&numero);
         soma=soma+numero;
         cont=cont+1;
    }
    
    printf("A soma dos n�meros � %f\n",soma);
    system("pause");
    
}
