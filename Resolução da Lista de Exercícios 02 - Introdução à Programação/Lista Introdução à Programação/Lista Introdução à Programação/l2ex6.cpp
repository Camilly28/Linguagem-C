#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      int a,b,c,expa;
      float expb;
      a = 5;
      b = 10;
      c = -2;
      expa = (b/a)%c;
      expb = sqrt(c*c+(b/a)+3);
      printf("Resultado da express�o a = %d\n",expa);
      printf("Resultado da express�o b = %.2f\n",expb);
      system("pause");
}      
      
