/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
   struct ListNode *fast,*slow = head;
    if (fast == NULL)
        return head->next;
   while(n--)
   {
       fast = fast -> next;
   }
   while(fast -> next != NULL)
   {
       slow = slow -> next;
       fast = fast -> next;
   }
   slow -> next = slow -> next -> next;
   return head;
