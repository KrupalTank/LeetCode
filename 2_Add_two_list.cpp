
//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = new ListNode();
        ListNode *current = l3;
        int total = 0, carry = 0, num=0;

        while(l1 || l2 || carry)
        {
            total = carry;
            if(l1)
            {
                total += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                total += l2->val;
                l2 = l2->next;
            }

            num = total %10;
            carry = total / 10;
            l3->next = new ListNode(num);
            l3 = l3->next;

        }
        
        ListNode *result = current->next;
        delete current;
        return result;


    }
};