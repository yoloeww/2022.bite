# include <stdio.h>
int ﻿fun(year)
{
    if(((year%4==0)&&(year%100!=0))||year%400==0)
    return 1;
    elsereturn 0;
}﻿
int main()
{
   int year = 0;
   scanf("%d",&year);
   int flag = fun(n);
   if(flag)
   printf("yes\n");
   else
   printf("no\n");
   return 0;
}
