# include <stdio.h>
int main()
{
    int max = 0;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    for(i = 0;i <= 10; i++)
    {
        if(max<i)
        max = i;
    }
    printf("%d",max);
    return 0;
}
