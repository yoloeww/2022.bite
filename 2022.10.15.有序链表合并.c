
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    /*算法思路：
    让pa指向list1的头节点的next域
    让pb指向list2的头节点的next域
    开辟一个新的节点newlist并且将其next置为空
    开辟一个指针节点tail指向newlist
    当pa并且pb都不等于null的时候
    谁大谁增加到tail的后面
    然后头节点往后移动
    最后谁不等于空将剩下的移到之后

    */

    struct ListNode* pa = list1;   
    struct ListNode* pb = list2;
    struct ListNode* newlist = (struct ListNode*)malloc(sizeof(struct ListNode));
    newlist ->next = NULL;
    struct ListNode* tail = newlist;
    while(pa && pb)
    {
        if(pa->val < pb->val)
        {
            tail -> next = pa;
            pa = pa->next;
        }
        else
        {
            tail -> next = pb;
            pb = pb->next;
        }
        tail = tail ->next;
    }
    if(pa)
    {
        tail->next = pa;
    }
    if(pb)
    {
        tail->next = pb;
    }
    struct ListNode* head = newlist->next;
    free(newlist);
    return head;
}
