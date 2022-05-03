# include<stdio.h>
int main()
{
    int i = 1;
    int n = 0;
    int ret = 1;
    int sum = 0;
    scanf("%d" , &n);
    for(i = 1; i <= n ;i++)
    {
        ret = ret * i;
        sum +=ret;
    }
    printf("n!=%d\n",ret);
    printf("sum=%d\n",sum);
    return 0;

}