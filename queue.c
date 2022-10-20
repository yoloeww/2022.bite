# include "queue.h"
void QueueInit(Queue* q)
{
    assert(q);
    q->front = NULL;
    q->rear =NULL;
    q->size = 0;
}
void QueuePush(Queue* q, QDataType val)
{
    assert(q);
    QNode *newnode = (QNode *)malloc(sizeof(QNode));
    if(newnode == NULL)
    {
        perror("malloc fail");
    }
    else
    {
        newnode ->data = val;
        newnode ->next =NULL;
    }
    if(q->rear == NULL)
    {
    q->front =q->rear = newnode;
    }
    else
    {
        q->rear->next = newnode;
		q->rear = newnode;
    }
   q->size++;
}
void QueuePop(Queue* q)
{
    assert(q);
    assert(!QueueEmpty(q));
    if(q->front->next ==NULL)
    {
        free(q->front);
        q->front=q->rear = NULL;
    }
    else
    { 
         QNode *newnode del = q->front;
         q->front = q->front->next;
         free(del);
         del = NULL;
    }
    q->size --;
}
QDataType QueueFront(Queue* q)
{
    assert(q);
    assert(!QueueEmpty(q));
    return q->front->data;
}
// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{
    assert(q);
    assert(!QueueEmpty(q));
    return q->rear->data;

}
bool QueueEmpty(Queue* q)
{
    assert(q);
    return q->head ==NULL&&q->rear ==NULL;
}
int QueueSize(Queue* q)
{
    assert(q);
    QNode *newnode cur;
    cur = q->front;
    int i =0;
    while(cur)
    {
        ++n;
        cur = cur->next;
    }
    return q->size;
}
