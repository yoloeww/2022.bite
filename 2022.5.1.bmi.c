#include <stdio.h>

int main() 
{
    int weight = 0, height = 0;
    scanf("%d %d",&weight,&height);
    printf("%.2f\n", weight / (height/100.f * height/100.f));
    return 0;
}
