void swap(int *a,int *b)
{
    t = *b;
    *b = *a;
    *a = t;
}
# include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d%d",a,b);
    return 0;
}
