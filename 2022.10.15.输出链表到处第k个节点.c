/*
解题思路：
快慢指针法 fast, slow, 首先让fast先走k步，然后fast,slow同时走，fast走到末尾时，slow走到倒数第k个节点。
*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        struct ListNode* slow = pListHead;
        struct ListNode* fast = slow;
        while(k--)
        {
            if(fast)
                fast = fast->next;
            else
                return NULL;
        }
         
        while(fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
         
        return slow;
    }
};
