#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2) return 0;
        int maxgap = 0, gap=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            gap = abs(nums[i] - nums[i+1]);
            if(maxgap < gap)
            {
                maxgap = gap;
            }
        }
        return maxgap;
    }
};