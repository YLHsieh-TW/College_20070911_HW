#include <stdio.h>
#include <stdlib.h>
int main()
{
  double money,c,b,sum=0,dream_money;
  int year,y;
  FILE *in;
  in=fopen("2.txt","r");
  
  if(in!=NULL)
  {
      fscanf(in,"%lf",&money);
      fscanf(in,"%lf",&b);
      fscanf(in,"%lf",&dream_money);
      c=1+0.01*b;
      
      sum=money;
      
      for(y=1;dream_money>=sum;y++)
      {
         sum*=c;
         /*sum+=money;*/
         if(dream_money<=sum)
         {
            printf("year=%d\n",y);
         }
      }   
  }
  else 
  printf("未發現檔案\n");
  
  system("pause");
  return 0;
}
