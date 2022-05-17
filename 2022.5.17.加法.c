# include <stdio.h>
int main()
{
    float i = 0,sum = 0,n = 1;
    int s = 1.0;
    for(i = 1;i <= 100;i++)
    {
       n = s/i;
       s = - s;
       sum +=n;
    }
   printf("sum=%f\n",sum); 
   return 0;
};
