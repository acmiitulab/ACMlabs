
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
         if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        ListNode * l3;
        ListNode * tail;
        if(l1->val<l2->val)
        {
            l3=l1;
            tail=l3;
            l1=l1->next;
        }
        else
        {
            l3=l2;
            tail=l3;
            l2=l2->next;
        }
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                tail->next=l1;
                tail=tail->next;
                l1=l1->next;
            }
            else
            {
                tail->next=l2;
                tail=tail->next;
                l2=l2->next;
            }
        }
        if(l1==NULL)
        {
            tail->next=l2;
        }
        else
        {
            tail->next=l1;
        }
        return l3;
    }
};