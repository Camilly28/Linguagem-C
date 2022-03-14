#include <stdio.h>
#include <stdlib.h>
main()
{
      float base,altura,area;
      printf("Informe a base: ");
      scanf("%f",&base);
      printf("Informe a altura: ");
      scanf("%f",&altura);
      area = (base*altura)/2;
      printf("Área do triângulo = %.2f\n",area);      
      system("pause");
}
