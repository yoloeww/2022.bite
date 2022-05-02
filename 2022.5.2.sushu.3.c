# include<stdio.h>
int main()
{
    int i;
    for(i=101;i<=200;i++)
{
      int j=2;
      for(j=2;j<i;j++)
      {
       if(i%j==0)
         break;
      }
       if(i==j)
       printf("%d\n",i);
}
return 0;
}