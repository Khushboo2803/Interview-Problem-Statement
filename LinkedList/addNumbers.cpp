//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.
#include<iostream>
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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* ret=nullptr;
       ListNode* result=nullptr;
        
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        int sum=0, carry=0;
        
        while(l1 && l2)
        {
            sum=l1->val + l2->val + carry;
            ListNode* new_node=new ListNode(sum%10);
            if(ret==nullptr)
            {
                result=new_node;
                ret=result;
            }
            else
            {
                ret->next=new_node;
                ret=ret->next;
            }
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
            cout<<sum<<" ";
        }
        while(l1)
        {
            sum=l1->val + carry;
            ListNode* new_node=new ListNode(sum%10);
            ret->next=new_node;
            ret=ret->next;
            carry=sum/10;
            l1=l1->next;
            cout<<sum<<" ";
        }
        while(l2)
        {
            sum=l2->val + carry;
            ListNode* new_node=new ListNode(sum%10);
            ret->next=new_node;
            ret=ret->next;
            carry=sum/10;
            l2=l2->next;
            cout<<sum<<" ";
        }
        
        if(carry!=0) {
            ListNode* new_node=new ListNode(carry);
            ret->next=new_node;
            ret=ret->next;
        }
        
        return result;
    }