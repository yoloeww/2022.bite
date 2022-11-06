/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode *last = headA;
    struct ListNode *slow = headB;
    int gap = 0;
    int lenlast = 0,lenslow = 0;
    while(last)
    {
        lenlast++;
        last = last->next;
    }
    while(slow)
    {
        lenslow++;
        slow = slow->next;
    }
    gap = abs(lenslow - lenlast);
    struct ListNode* longList = headA, *shortList = headB;
    if(lenslow > lenlast) 
    {
        longList = headB;
        shortList = headA;
    }
    while(gap--)
    {
        longList = longList -> next;
    }
    while(longList && shortList)
    {
        if(longList == shortList)
        return longList;
        else 
        {
            longList = longList->next;
            shortList = shortList->next;
        }
    }
    return NULL;
}
