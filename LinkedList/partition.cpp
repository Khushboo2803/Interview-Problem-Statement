//Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

//You should preserve the original relative order of the nodes in each of the two partitions.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *less=nullptr;
        ListNode *greater=nullptr;
        ListNode *copy_less=nullptr;
        ListNode *copy_greater=nullptr;
        if(!head) return nullptr;
        while(head)
        {
            if(head->val<x)
            {
                if(!less)
                {
                    less=new ListNode(head->val);
                    copy_less=less;
                }
                else
                {
                    less->next=new ListNode(head->val);
                    less=less->next;
                }
            }
            else
            {
                if(!greater)
                {
                    greater=new ListNode(head->val);
                    copy_greater=greater;
                }
                else
                {
                    greater->next=new ListNode(head->val);
                    greater=greater->next;
                }
            }
            head=head->next;
        }
        if(!copy_less) return copy_greater;
        
        while(copy_greater)
        {
            less->next=new ListNode(copy_greater->val);
            less=less->next;
            copy_greater=copy_greater->next;
        }
        
        return copy_less;
    }
};