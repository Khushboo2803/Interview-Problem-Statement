//Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        bool duplicate=false;
        if(!head) return nullptr;
        while(head->next && head->val==head->next->val)
        {
            duplicate = true;
            head->next=head->next->next;
        }
        head->next=deleteDuplicates(head->next);
        return ( duplicate? head->next : head);
    }
};