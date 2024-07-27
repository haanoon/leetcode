class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1!=NULL && list2 != NULL)
       {
            ListNode *a = list1;
            ListNode *b = list2;
            ListNode *x,*h;
            if(a->val>b->val)
            {
                x = b;
                h = b;
                b = b->next;
            }
            else
            {
                x = a;
                h = a;
                a = a->next;
            }
            while(a!=NULL && b!=NULL)
            {
                if(a->val>b->val)
                {
                    x->next = b;
                    x = x->next;
                    b = b->next;
                }
                else
                {
                    x->next = a;
                    x = x->next;
                    a = a->next;
                }
            }
            while(a!=NULL)
            {
                x->next = a;
                x = x->next;
                a = a->next;
            }
            while(b!=NULL)
            {
                x->next = b;
                x = x->next;
                b = b->next;
            }
            return h;
        }
        if(list1==NULL && list2!=NULL)
            return list2;
        if(list1!=NULL && list2==NULL)
            return list1;
        if(list1==NULL && list2==NULL)
            return NULL;
        return NULL;
 
 }       
        
    
};