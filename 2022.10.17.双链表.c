# include "2022.双链表.h"
ListNode* ListCreate()
{
    ListNode *head = (ListNode*)malloc(sizeof(ListNode));
    head -> _next = head;
    head -> _prev = head;
    return head;
}
void ListDestory(ListNode * head)
{
    ListNode *tail = head ->_next;
    while(tail!= head)
    {
       ListNode *cur = tail ->_next;
       free(tail);
       tail = cur;
    }
    free(head);
}
void ListPrint(ListNode *head)
{
    assert(head);
    ListNode *cur = head->_next;
    while(cur != head)
    {
        printf("d->",cur->_data);
        cur = cur -> _next;
    }
    printf("\n");
}
ListNode* BuyListNode(LTDataType x)
{
    ListNode* cur = (ListNode*)malloc(sizeof(ListNode));
    cur->_next = NULL;
    cur->_prev = NULL;
    cur->_data=x;
    return cur;
}
void ListPushBack(ListNode* head, LTDataType x) //尾插
{
    assert(head);
    ListNode * newnode = BuyListNode(x);
    ListNode * tail = head -> _prev;
    tail -> _next = newnode;
    newnode ->_next = head;
    newnode ->_prev = tail;
    tail ->_prev =  newnode;
}
void ListPopBack(ListNode* head) //尾删
{ 
    assert(head);
    ListNode * tail = head ->_prev;
    ListNode * cur = tail -> _prev;
    cur->_next = head;
    head->_prev = cur;
    free(tail);
}
// 双向链表头插
void ListPushFront(ListNode* head, LTDataType x)
{
   assert(head);
   ListNode *newnode = BuyListNode(x);
   ListNode *temp = head->_next;

   head->_next = newnode;
   newnode->_prev =head;
   newnode ->_next = temp;
   temp->_prev = newnode;
   
}
// 双向链表头删
void ListPopFront(ListNode* pHead)
{
    assert(pHead);
    ListNode *temp = pHead ->_next;
    pHead->_next = temp ->_next;
    temp -> _prev =pHead;
    free(temp);

    temp->_data=0;
    temp->_next= NULL;
    temp->_prev =NULL;

}
// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
    ListNode *newnode = BuyListNode(x);
    assert(pos);
    ListNode *pre = pos->_prev;
    pre ->_next = newnode;
    newnode -> _next = pos;
    newnode -> _prev = pre;
    pos ->_prev =newnode;
}
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos)
{
    
}
