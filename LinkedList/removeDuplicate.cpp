//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ret=head;
        if(!head) return nullptr;
        while(head->next)
        {
            if(head->val==head->next->val)
                head->next=head->next->next;
            else
                head=head->next;
        }
        return ret;
    }
};