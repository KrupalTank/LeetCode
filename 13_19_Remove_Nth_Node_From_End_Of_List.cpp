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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *current = head, *a1 = head, *previous = NULL;
        int totalnodes = 1;
        while(current->next) 
        {
            previous = current;
            current = current->next;
            totalnodes++;
        }
        int x = totalnodes - n + 1;
        if(n==1 && previous==NULL)
        {
            head = NULL;
            return head;
        }
        if(n == 1)
        {
            previous->next = NULL;
            return head;
        }
        if(x == 1)
        {
            head = a1->next;
            a1->next = NULL;
            return head;
        }
        int i=1;
        while(i < x-1)
        {
            a1 = a1->next;
            i++;
        }
        a1->next = a1->next->next;
        return head;
    }
};