
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        
        ListNode* temp= head, *prev= NULL, *dummy;
        
        while(temp!= NULL) {
            dummy= temp->next;
            temp->next= prev;
            prev= temp;
            temp= dummy;
        }
     
        head= prev;
        
        return head;
    }
};