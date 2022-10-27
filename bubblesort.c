# include<stdio.h>
# include<string.h>
# include<assert.h>
void BubbleSort(int* a, int n)
{
    int i = 0 ,j  = 0;
    int temp = 0,flag = 0;
    for(i = 0 ;i< n - 1;i++)
    {
        for(j = 0;j < n - i - 1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                flag = 1;
            }
            if(flag == 0 )
            break;
        }
    }
}
int main()
{
    int a[] = { 3, 4, 6, 1, 2, 8, 0, 5, 7 };
    int n = sizeof(a) / sizeof(int);
    BubbleSort(a,n);
    for(int i = 0; i < n;i++)
    {
        printf("%d" ,a[i]);
    }
}
