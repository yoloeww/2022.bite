#include <stdio.h>
#include <math.h>
 
 
int main()
{
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    int i = 0;
    while(n/10)
    {
        int m = n%10;
        if(m%2==1)
            m = 1;
        else
            m = 0;
        sum += m*pow(10, i);
        i++;  
    }
    printf("%d\n", sum);
    return 0;
}
