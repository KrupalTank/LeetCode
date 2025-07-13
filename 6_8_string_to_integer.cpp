#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int j=0, mul = 1;
        long ans = 0;
        while((s[j]) == ' ') j++;
        
        if(s[j] == '-' || s[j] == '+')
        {
            mul = -1;
            if(s[j] == '+') mul = 1;
            j++;
        }
        int i = j;
        while(i<s.size() && isdigit(s[i]))
        {
                ans = 10*ans + (s[i] - '0');
                if(mul*ans > INT32_MAX) return INT32_MAX;
                else if(mul*ans < INT32_MIN) return INT32_MIN;
                i++;
        }
        return int(ans*mul);
    }
};