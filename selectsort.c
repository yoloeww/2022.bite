# include<stdio.h>
# include<string.h>
void Swap(int *a, int *b)
{
    int temp = 0 ;
    temp = *a;
    *a = *b;
    *b = temp;
}
void SelectSort(int* a, int n)
{
    int begin = 0,end = n-1;
    while(begin < end)
    {
    int mini = begin,maxi = begin;
    for(int i = begin;i <= end;i++)
    {
       if(a[i] > a[maxi]) 
       {
        maxi = i;
        }
       if(a[i] < a[mini])
       {
        mini = i;
       }
     }
     if (maxi == begin)
			maxi = mini;
    	Swap(&a[begin], &a[mini]);
		// 修正一下maxi
        --end;
        ++begin;
 } 
}
int main()
{
    int a[] = { 3, 4, 6, 1, 2, 8, 0, 5, 7 };
    int n = sizeof(a) / sizeof(int);
    SelectSort(a,n);
    for(int i = 0; i < n;i++)
    {
        printf("%d" ,a[i]);
    }
}
