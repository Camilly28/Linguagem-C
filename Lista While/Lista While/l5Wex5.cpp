#include <stdio.h>
#include <stdlib.h>

main()
{   int n,cont,numero,maior;

    cont=0;
    maior=0;
    
    printf("Informe o tamanho da lista: ");
    scanf("%d",&n);
    
    while(cont<n)
    {    printf("Informe um n�mero inteiro positivo: ");
         scanf("%d",&numero);
         if(numero>maior)
            maior=numero;
         cont=cont+1;
    }
    
    printf("O maior dos n�meros informados � %d\n",maior);
    system("pause");
    
}
