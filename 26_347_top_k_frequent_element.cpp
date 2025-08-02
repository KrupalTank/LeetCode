#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int max_ele=0, min_ele = INT32_MAX;
        sort(nums.begin(), nums.end());
        min_ele = nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            nums[i] = nums[i] - min_ele;
        }
        max_ele = nums[nums.size()-1];
        vector<int>v(max_ele + 1, 0);
        for(int i=0; i<nums.size(); i++)
        {
            v[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0; i<k; i++)
        {
            auto it = max_element(v.begin(), v.end());
            int index = distance(v.begin(), it);
            v[index] = -1;
            ans.push_back(index+min_ele);
        }
    return ans;
    }
};