#include<vector>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0 || s.length() == 1) return s.length();
        
        vector<int>v;
        set<char>a1;
        for(int i=0; i<s.length(); i++)
        {
            for(int j=i; j<s.length(); j++)
            {
                auto result = a1.insert(s[j]);
                if(!result.second)
                {
                    v.push_back(a1.size());
                    a1.clear();
                    break;
                }
            }
        }

        auto max_iterator = max_element(v.begin(), v.end());
        return *max_iterator;

    }
};