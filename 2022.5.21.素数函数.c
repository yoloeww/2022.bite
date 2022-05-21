# include <stdio.h>
void prime()
{
   int flag=1;
   int i=0,j=0;
   for(i = 100;i <= 200;i ++)
   {
      flag = 1;
      for(j = 2;j < i/2;j ++)
      {
      if(i % j == 0)
      {
       flag = 0;
       break;
      }  
      } 
       if(flag == 1 )
       printf("%d ",i);
   }


}
int main()
{
  prime();
  return 0;
}
