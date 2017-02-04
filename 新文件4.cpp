#include <stdio.h>
#include <stdlib.h>
int main()
{
  double money,c,b,sum=0;
  int year,y;
  FILE *in;
  in=fopen("1.txt","r");
  
  if(in!=NULL)
  {
      fscanf(in,"%lf",&money);
      fscanf(in,"%d",&year);
      fscanf(in,"%lf",&b);
      c=1+0.01*b;
      
      sum=money;
      
      for(y=1;y<=year;y++)
      {
         sum*=c;
      }   
  }
  else 
  printf("未發現檔案\n");
  
  printf("%lf\n",sum);

  system("pause");
  return 0;
}
