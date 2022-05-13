# include <stdio.h>
int main()
{
    int i,j,k;
    while(scanf("%d",&i)!=EOF)
    {
    for(k=0;k<i;k++)
    { 
        for(j=0;j<i;j++)
        {
            if(k==j)
                printf("*");
            else if(j==i-k-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    }
    return 0;
}
