# include <stdio.h>
int fun1(int n)
{
    if(n==1)
      return 1;
    else if(n==0)
      return 0;
    else 
      return fun1(n-1)*n;
}
int fun2(int n)
{
   int sum = 1;
   int i = 0;
   for(i = n;i >= 1;i--)
  {
      sum *= i;
  }
  return sum;
}
int main()
{
   int n = 10;
   printf("%d",fun1(n));
   printf("%d",fun2(n));
   return 0;
}
