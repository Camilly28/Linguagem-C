#include <stdio.h>
#include <stdlib.h>

main()
{ char matricula[10];
  float frequencia,nota1,nota2,nota3,media;
  printf("Informe a matr�cula: ");
  scanf("%s",&matricula);
  printf("Informe a frequ�ncia: ");
  scanf("%f",&frequencia);
  printf("Informe as tr�s notas: ");
  scanf("%f%f%f",&nota1,&nota2,&nota3);
  media = ((2*nota1)+(3*nota2)+(4*nota3))/9;
  printf("M�dia = %.2f\n",media);
  printf("Percentual de frequ�ncia = %.2f %\n",frequencia);
  if (media>=7.0)
     if (frequencia<50)
         printf("Final\n");
     else
         printf("Aprovado\n");
  
  else
       if ((media>=5.0)&&(media<7.0))
         if (frequencia<50)
              printf("Reprovado\n");
          else
              printf("Final\n"); 
       else
          if (media<5.0)
              if (frequencia==100)
                  printf("Final\n");
               else
                  printf("Reprovado\n");        
  system("pause");
}
