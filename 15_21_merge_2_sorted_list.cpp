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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *a1 = list1, *head = list1, *a2 = list2, *temp = NULL, *previous = NULL;
        while(a1 && a2)
        {
            if(a1->val <= a2->val)
            {
                while(a1 && (a1->val <= a2->val))
                {
                    previous = a1;
                    a1 = a1->next;
                }
                previous->next = new ListNode(a2->val, a1);
                previous = previous->next;
                a2 = a2->next;
            }
            else{
                if(previous == NULL)
                {
                    ListNode *a = new ListNode(a2->val, a1);
                    previous = a;
                    a2 = a2->next;
                    head = a;
                    continue;
                }
                previous->next = new ListNode(a2->val, a1);
                previous = previous->next;
                a2 = a2->next;
            }
        }
        if(!a1)
        {
            if(previous == NULL) return list2;
            while(a2)
            {
                previous->next = new ListNode(a2->val);
                previous = previous->next;
                a2 = a2->next;
            }
        }
        return head;

    }
};