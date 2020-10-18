class Solution {
public:
    void deleteNode(ListNode* node) {
        int p;
        p=node->next->val;
        node->next->val=node->val;
        node->val=p;
        node->next=node->next->next;
    }
};