#include <stdio.h>
#include <stdlib.h>
main()
{
      char msg[100];
      printf("Informe uma mensagem: ");
      //scanf("%s",&msg);
      gets(msg);
      printf("A mensagem informada foi %s\n",msg);
      system("pause");
}     
