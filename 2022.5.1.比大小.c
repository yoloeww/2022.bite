# include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=a>b?a:b;
    y=c>d?c:d;
    printf("%d",x>y?x:y);
    return 0;
    
    
}
