#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows){
        if(numRows == 1) return s;
        vector<char>v[numRows];
        int j = 0, turn = 0;

        for(int i=0; i<s.length(); i++)
        {
            v[j].push_back(s[i]);
            if(turn == 0)
            {
                j++;
                if(j == numRows)
                {
                    j--;
                    turn = 1;
                }
            }
            if(turn == 1)
            {
                j--;
                if(j<0)
                {
                    j += 2;
                    turn = 0;
                }
            }
        }
        string ans = "";
        for(int i=0; i<numRows; i++)
        {
            for(char ch : v[i])
            {
                ans += ch;
            }
        }
        return ans;
    }
};