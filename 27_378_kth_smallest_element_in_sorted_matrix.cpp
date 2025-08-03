#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(k == 1) return matrix[0][0];
        int n = matrix.size(), i=0, j=0;
        vector<int>v;
        while(i<n)
        {
            v.push_back(matrix[i][j]);
            j++;
            if(j==n)
            {
                i++;
                j=0;
            }
        }
        sort(v.begin(), v.end());
        return v[k-1];

    }
};