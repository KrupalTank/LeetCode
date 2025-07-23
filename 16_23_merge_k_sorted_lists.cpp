#include<vector>
#include<iostream>
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        vector<int>v;
        ListNode *a1 = NULL;
        for(int i = 0; i<lists.size(); i++)
        {
            if(lists[i])
            {
                a1 = lists[i];
                while(a1)
                {
                    v.push_back(a1->val);
                    a1 = a1->next;
                }
            }
        }
        if(!v.size()) return NULL;
        sort(v.begin(), v.end());
        ListNode *res = NULL, *head = NULL;
        head = res = new ListNode(v[0]);
        for(int i=1; i<v.size(); i++)
        {
            res->next = new ListNode(v[i]);
            res = res->next;
        }
        return head;
    }
};