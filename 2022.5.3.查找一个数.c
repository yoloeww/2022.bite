# include<stdio.h>
int mainO()
{
  int a[] = {2,4,5,6,7,20};
  int i = 0;
  int m;
  int one=0;
  int end=sizeof(a)/sizeof(a[0])-1;//元素个数
  int mid=0;
  printf("input m:\n");
  scanf("%d",&m);
  while(one<=end)
  {
    int mid=(end+one)/2;
    if(m>a[mid])
       one=mid+1;
    else if(m<a[mid])
       end=mid-1;
    else  
    {
       printf("find!,下标为：%d\n",mid);
       break;
    }
  }
  if(one>end)
  {
     printf("not find\n");
  }
  return 0;
  )


}