# include <stdio.h>
# define N 10
int main()
{
   int a[10]={0};
   int b[10]={1,2,3,4,5,6,7,8,9,10};
   int i;
   int c=0;
   printf("=========before=========");
   printf("\narray a:\n");
   for(i=0;i<N;i++)
   printf("%5d",a[i]);
   printf("\narray b:\n");
   for(i=0;i<N;i++)
   printf("%5d",b[i]);
   for(i=0;i<N;i++)
   {
      c=a[i];
      a[i]=b[i];
      b[i]=c;
   }
   printf("\n=========after=========");
   printf("\narray a:\n");
   for(i=0;i<N;i++)
   printf("%5d",a[i]);
   printf("\narray b:\n");
   for(i=0;i<N;i++)
   printf("%5d",b[i]);
   putchar('\n');
   return 0;
}