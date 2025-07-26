#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k){
        if(head->next == NULL)return head;
        ListNode *a1 = head;

        vector<int>v;

        while(a1)
        {
            v.push_back(a1->val);
            a1 = a1->next;
        }

        for(int i=0; i<v.size(); i += k)
        {
            cout<<i<<" ";
            if(i+k <= v.size())
            {
                reverse(v.begin()+i, v.begin()+i+k);
            }
        }

        ListNode *list = new ListNode(v[0]), *HEAD = list;
        for(int i=1; i<v.size(); i++)
        {
            list->next = new ListNode(v[i]);
            list = list->next;
        }
        return HEAD;
    }
};