void ShellSort(int* a, int n)
{
    int gap = n;
    for (int i = 0; i < n - gap; i++)
    {
        gap = n/2;
        int end = i;
        int tmp = a[end + gap];
        while(end >= 0)
        {
        if(a[end] > tmp)
        {
             a[end + gap] = a[end];
             end = end - gap;
        }
        else
        {
            break;
        }
        a[end+gap] =tmp;
        }
    }
    
    
}
