struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    if(headA == NULL || headB == NULL)
    return NULL;
    //判断他们的尾节点地址是否相同
    //求出两个长度差步数，然后长的先走这么多，然后两个一起走，第一个相等就是节点
    struct ListNode * cura = headA;
    struct ListNode * curb = headB;
    int lena = 1,lenb = 1;
    while(cura -> next)
    {
        lena++;
        cura = cura -> next;
    }
    while(curb -> next)
    {
        lenb++;
        curb = curb -> next;
    }
    if(cura != curb)
    {
         return NULL;
    }
    struct ListNode * longhead = headA;
    struct ListNode * lesshead = headB;
    if(lena < lenb)
    {
        longhead = headB;
        lesshead = headA;
    }
    int gap = abs(lena-lenb);
    while(gap--)
    {
        longhead = longhead->next;
    }
    while(longhead!=lesshead)
    {
        longhead = longhead ->next;
        lesshead = lesshead ->next;
    }
    return longhead;
}
