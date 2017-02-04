#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a,b;
   printf("   ");
   
   for(a=1;a<10;a++){
      printf("%3d",a);
   }
   
   printf("\n");
   printf("==============================\n");
   
   for(a=1;a<10;a++){
      printf("%d |",a);
      for(b=1;b<10;b++){
         printf("%3d",a*b);
      }
   printf("\n");
   }
   
   system("pause");
   return 0;
}
