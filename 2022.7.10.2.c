int* printNumbers(int n, int* returnSize ) 
{
     int len=pow(10,n);
    len=len-1;
    *returnSize=len;
    int *a=(int *)malloc(len*sizeof(int));
    for(int i=1;i<=len;i++){
        a[i-1]=i;
    }
    return a;
}
