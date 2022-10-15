struct ListNode* middleNode(struct ListNode* head)
{
    /*一快一慢
    当快结束慢到中间
    */
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while(fast !=NULL&&fast->next!=NULL)
    {
       slow = slow->next;
       fast = fast->next->next;
    }
    return slow;
}
