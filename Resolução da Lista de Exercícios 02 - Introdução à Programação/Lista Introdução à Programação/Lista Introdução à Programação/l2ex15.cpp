#include <stdio.h>
#include <stdlib.h>
main()
{
      float f,c;
      printf("Informe a temperatura em Fahrenheit: ");
      scanf("%f",&f);
      c=((f-32)*5)/9;
      printf("Temperatura correspondente em Celsius = %.2f °C\n",c);                  
      system("pause");
}
      
