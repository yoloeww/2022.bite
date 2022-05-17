# include<stdio.h>
int main()
{
   int i = 0,j = 0;
   printf("99乘法表:\n");
   for(i = 1;i <= 9;i ++)
   {
       for(j = 1;j <= 9;j ++)
       {
           printf("%5d",i*j);
       }
       printf("\n");
   }
   return 0;
}
