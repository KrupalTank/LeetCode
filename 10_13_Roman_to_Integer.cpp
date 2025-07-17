#include<map>
#include<cstring>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<char, int>m = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
        int num = 0, n = s.length();
        for(int i=0; i<n; i++)
        {
            if(i == n-1)
            {
                num = num + m[s[i]];
            }
            else if(m[s[i]] > m[s[i+1]])
            {
                num += m[s[i]];
            }
            else if( m[s[i]] == m[s[i+1]] ){
                num = m[s[i]] + m[s[i+1]] + num;
                i++;
            }
            else{
                num = num + m[s[i+1]] - m[s[i]];
                i++;
            }
        }
        
        return num;
    }
};