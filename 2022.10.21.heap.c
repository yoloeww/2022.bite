# include "heap.h"
void HeapInit(HP* php)
{
    assert(php);
    php->size=php->capacity = 0;
    php->a=NULL;
}
void HeapPrint(HP *php)
{
    assert(php);
    for(int i = 0;i<php->size;i++)
    {
        printf("%2d",php->a[i]);
    }
    printf("\n");
}
void HeapDestroy(HP* php)
{
    assert(php);
    free(php);
    php->a = NULL;
    php -> size=php->capacity = 0;
}
void Swap(HPDataType* p1, HPDataType* p2)
{
    HPDataType h;
    h = *p1;
    *p1 = *p2;
    *p2 = h;
}
void HeapPush(HP *php,HPDataType x)
{
    
}
void AdjustUp(HPDataType *a,int child)
{
    int parent =(child - 1)/2;
    while(child > 0)
    {
        if(a[child] < a[parent])
        {
            swap(&a[child],&a[parent]);
            child = parent;
            parent =(child-1)/2;
        }
        else
        {
            break;
        }
    }
}
void AdjustDown(HPDataType* a, int n, int parent)
{
     int minchild = parent *2 +1;
     while(minchild < n)
     {
        if(minchild + 1 < n && a[minchild+1] < a[minchild])
        {
            minchild ++;
        }
        if(a[minchild] < a[parent])
        {
            swap(&a[minchild],&a[parent]);
            parent = minchild;
            minchild = parent *2+1;
        }
        else
        {
            break;
        }
     }
}
void HeapPush(HP* php, HPDataType x)
{
    assert(php);
    if(php->size == php->capacity)
    {
        int newcapacity = php->capacity ==0?4:2*php->capacity;
        HPDataType *tmp = (HPDataType *)malloc(newcapacity*sizeof(HPDataType ));
        php -> a = tmp;
        php ->capacity = newcapacity;
    }
    php->a[php->size] = x;
    php->size++;
    AdjustUp(php->a,php->size-1);
}
void HeapPop(HP* php)
{
    assert(php);
    assert(!HeapEmpty(php));
    swap(&php->a[0],&php->a[php->size-1]);
    php->size--;
    AdjustDown(php->a,php->size,0);
}

HPDataType HeapTop(HP* php)
{
    assert(php);
    assert(!HeapEmpty(php));
    return php->a[0];
}
bool HeapEmpty(HP* php)
{
    assert(php);
    return php->size == 0;
}
int HeapSize(HP* php)
{
    assert(php);
    return php->size;
}
