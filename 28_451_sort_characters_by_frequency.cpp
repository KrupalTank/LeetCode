#include<vector>
#include<map>
#include<string>
#include<set>
#include <utility>
#include<algorithm>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        set<char>c;
        for(char ch : s)
        {
            c.insert(ch);
        }
        map<char, int>m;
        for(char ch : c)
        {
            m.insert(make_pair(ch, 0));
        }
        for(char ch : s)
        {
            m[ch]++;
        }
        vector<pair<char, int>>v;
        for(auto ch : m)
        {
            v.push_back({ch.first, ch.second});
        }
        sort(v.begin(), v.end(), [](pair<char, int>&a, pair<char, int>&b){return a.second>b.second;});
        int j=0; string str = "";
        for(auto a : v)
        {   
            j=0;
            while(j<a.second)
            {
                str += a.first;
                j++;
            }
        }
        return str;

    }
};