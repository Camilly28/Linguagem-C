#include <stdio.h>
#include <stdlib.h>

main()
{   int n,cont,numero,maior;

    cont=0;
    maior=0;
    
    printf("Informe o tamanho da lista: ");
    scanf("%d",&n);
    
    do
    {    printf("Informe um n�mero inteiro positivo: ");
         scanf("%d",&numero);
         if(numero>maior)
            maior=numero;
         cont=cont+1;
    }while(cont<n);
    
    printf("O maior dos n�meros informados � %d\n",maior);
    system("pause");
    
}
