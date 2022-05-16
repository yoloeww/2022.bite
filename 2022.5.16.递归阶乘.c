# include <stdio.h>
int f(int n)
{
    if(n <= 1)
      return 1;
    else
      return n*f(n-1);
}
int main()
{
    int n;
    int k = f(n);
    printf("%d",k);
    return 0;
}
