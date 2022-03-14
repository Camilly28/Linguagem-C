#include <stdio.h>
#include <stdlib.h>
main()
{
      float largura,altura,area,qlitros,qlatas;
      largura=5;
      altura=2;
      area=largura*altura;
      qlitros=area*3;
      qlatas=qlitros/2;
      printf("Quantidade de latas de tinta = %.2f\n",qlatas);                  
      system("pause");
}
      
