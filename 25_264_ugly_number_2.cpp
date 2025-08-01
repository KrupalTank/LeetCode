#include<algorithm>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n){
            int ans[n+1];
            int i2=1,i3=1, i5 = 1, a, b, c, mini;
            ans[1] = 1;
            for(int i=2; i<=n; i++)
            {
                a = ans[i2]*2;
                b = ans[i3]*3;
                c = ans[i5]*5;
                mini = min({a, b, c});
                ans[i] = mini;
                if(mini == a) i2++;
                if(mini == b) i3++;
                if(mini == c) i5++;
            }
            return ans[n];
       }
};