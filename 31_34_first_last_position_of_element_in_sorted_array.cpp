
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        vector<int>v(2);
        v[0] = first; v[1] = last;
        auto it1 = find(nums.begin(), nums.end(), target);
        auto it2 = find(nums.rbegin(), nums.rend(), target);
        if(it1!= nums.end())
        {
            v[0] = distance(nums.begin(), it1);
        }
        if(it2!= nums.rend())
        {
            v[1] = nums.size()-1 - distance(nums.rbegin(), it2);
        }
        return v;
    }
};

/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        vector<int>v(2);
        firstoccurence(nums, first, 0, nums.size()-1, target);
        lastoccurence(nums, last, 0, nums.size()-1, target);
        v[0] = first; v[1] = last;
        return v;
    }
private:
    void firstoccurence(vector<int>nums, int &ans, int s, int e, int t)
    {
        if(s > e) return;
        int mid = (s+e)/2;
        if(nums[mid] == t)
        {
            ans = mid;
            firstoccurence(nums, ans, s, mid-1, t);
        }
        else if(nums[mid] > t)
        {
            firstoccurence(nums, ans, s, mid-1, t);
        }
        else{
            firstoccurence(nums, ans, mid+1, e, t);
        }
    }

    void lastoccurence(vector<int>nums, int &ans, int s, int e, int t)
    {
        if(s > e) return;
        int mid = (s+e)/2;
        if(nums[mid] == t)
        {
            ans = mid;
            lastoccurence(nums, ans, mid+1, e, t);
        }
        else if(nums[mid] > t)
        {
            lastoccurence(nums, ans, s, mid-1, t);
        }
        else{
            lastoccurence(nums, ans, mid+1, e, t);
        }
    }
};
*/