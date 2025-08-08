#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = 0;
        binarysearch(nums, ans, 0, nums.size()-1, target);
        return ans;
    }

private:
void binarysearch(vector<int>nums, int &ans, int s, int e, int t)
    {
        if(s > e) return;
        int mid = (s+e)/2;
        if(nums[mid] == t)
        {
            ans = mid;
            return;
        }
        else if(nums[mid] > t)
        {
            ans = mid;
            binarysearch(nums, ans, s, mid-1, t);
        }
        else{
            ans = mid+1;
            binarysearch(nums, ans, mid+1, e, t);
        }
    }
};