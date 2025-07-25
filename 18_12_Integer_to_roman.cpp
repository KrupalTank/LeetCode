#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string str = "";

       vector<pair<int, string>> arr = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        for(int i=0; i<arr.size(); i++)
        {
            while(num >= arr[i].first)
            {
                num -= arr[i].first;
                str += arr[i].second;
            }
        }
        return str;
    }
};