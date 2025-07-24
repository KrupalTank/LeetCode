#include<iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head) return NULL;
        if(head->next == NULL) return head;

        ListNode *a2 = NULL, *HEAD =a2, *a1 = head->next, *previous = head;
        a2 = new ListNode(a1->val);
        HEAD = a2;
        a2->next = new ListNode(previous->val);
        a2 = a2->next;
        int j = 0;
        if(a1->next)
        {
            previous = a1->next;
            a1 = a1->next->next;
        }
        else{
             return HEAD;
        }
        while(a1)
        {
            a2->next = new ListNode(a1->val);
            a2 = a2->next;
            a2->next = new ListNode(previous->val);
            a2 = a2->next;
            if(a1->next)
            {
                previous = a1->next;
                a1 = a1->next->next;
            }
            else{
                j = 1;
                break;
            } 
        }
        if(j) 
        {
            return HEAD;
        }
        if(previous && !a1)
        {
            a2->next = new ListNode(previous->val);
        }
        return HEAD;
    }
};