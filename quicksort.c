int pitsort(int *a, int left,int right)
{
    int mid = getmidindex(a,left,right);
    swap(&a[left],&a[mid]);
    int key = a[left];
    int hole = left;
    while(left < right)
    {
        if(left < right && a[right] <= key)
        {
           --right;
        }
            a[hole] = a[right];
            right = hole;
        if(a[left] > key)
        {
           ++left;
        }
         a[hole] = a[left];
         hole = left;
         a[hole] = key;

    }
    return hole;
}
