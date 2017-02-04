#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a,b;
   for(b=1;b<10;b++)
   {
      for(a=1;a<4;a++)
      {
         printf("%d*%d=%2d                 ",a,b,a*b);
      }
   printf("\n");
   }
   printf("\n\n");
   for(b=1;b<10;b++)
   {
      for(a=4;a<7;a++)
      {
         printf("%d*%d=%2d                 ",a,b,a*b);
      }
   printf("\n");
   }
   printf("\n\n");
   for(b=1;b<10;b++)
   {
      for(a=7;a<10;a++)
      {
         printf("%d*%d=%2d                 ",a,b,a*b);
      }
   printf("\n");
   }
   

   system("pause");
   return 0;
}
