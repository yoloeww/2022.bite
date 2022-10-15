struct ListNode*lessGuard, *lesstail,*greaterGuard, *greaterTail;
 lessGuard = lessTail = (ListNode*)malloc(sizeof(ListNode));
 greaterGuard = (ListTail*)malloc(sizeof(ListNode));
 lessGuard->next=NULL;
 greaterHeadGuard->next=NULL;
 struct ListNode* cur = pHead;
 while(cur)
 {
     if(cur->val < x)
     {
     lessTail->next=cur;
     lessTail = lessTail->next;
     }
     else
     {
     greaterTail ->next=cur;
     greaterTail = greaterTail->next;
     }
     cur = cur->next;
    }
}
lessTailTail->next = greaterHead->next;
greaterTail->next = NULL;
        //获取表头
        pHead = lessGuard->next;
        free(lessGuard);
        free(greaterGuard);
        
        return pHead;

 }
