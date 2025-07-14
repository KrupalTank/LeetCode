#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int num = x, digit = 0, reminder=0;
        long ans = 0;
        vector<int>v;
        while(num > 0)
        {
            reminder = num%10;
            num = num/10;
            digit++;
            v.push_back(reminder);
        }
        int i=0;
        while(i<v.size())
        {
            ans = ans*10 + v[i];
            i++;
        }

        if(x == ans) return true;
        return false;
    }
};