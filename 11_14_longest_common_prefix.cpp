#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int lowest = 200;
        string a;
        
        for(string s : strs)
        {
            if(lowest > s.length())
            {
                 lowest = s.length();
                 a = s;
            }

        }
        vector<char>arr;
        for(int i=0; i<lowest; i++)
        {
            arr.push_back(a[i]);
        }

        bool flag = true;
        string str = "";
        int j = lowest;
        for(string s : strs)
        {
           for(int i=0; i<lowest; i++)
           {
                if(arr[i] != s[i]) 
                {
                    if(j >= i) j = i;
                }
           }
        }
        for(int i=0; i<j; i++)
        {
            str += arr[i];
        }
        return str;
    }
};