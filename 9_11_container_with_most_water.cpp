#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximum = 0, left = 0, right = height.size() - 1,area = 0;
        while(left < right)
        {
            area = min(height[left], height[right]) * (right - left);
            maximum = max(maximum, area);
            if(height[left] < height[right]) left++;
            else right--;
        }
        
        return maximum;
    }
};