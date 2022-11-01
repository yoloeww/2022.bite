typedef struct ListNode Node;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
        if(l1 == NULL)
            return l2;
        else if(l2 == NULL)
           return l1;
             
        Node* head = NULL, *tail = NULL;
        //创建空链表
    	head = tail = (Node*)malloc(sizeof(Node));
        tail->next = NULL;
        while(l1 && l2)
        {
            // 取小的进行尾插
            if(l1->val < l2->val)
            {
