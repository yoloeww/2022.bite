int main()
{
   int a[10] = {0};
   printf("%p\n",a);
   printf("%p\n",&a[0]);//数组首元素地址
   printf("%p\n",&a);//整个数组地址
   //sizeof(数组名)=整个数组的大小，是字节
}
