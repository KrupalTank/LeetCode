#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    int bracket(char op)
    {
        if(op == '[' || op == '{' || op == '(') return 1;
        if(op == ']' || op == '}' || op == ')') return 2;
        return 0;
    }

    bool same(char op1, char op2)
    {
        if(op1 == '(' && op2 == ')') return true;
        if(op1 == '{' && op2 == '}') return true;
        if(op1 == '[' && op2 == ']') return true;
        return false;
    }
    bool isValid(string s) {
        stack<char>op;
        for(int i=0; i<s.length(); i++)
        {
            if(bracket(s[i]) == 0)
            {
                continue;
            }
            else if( bracket(s[i]) == 1 )
            {
                op.push(s[i]);
            }
            else{
                if(op.size() && same(op.top(), s[i]))
                {
                    op.pop();
                }
                else{
                    return false;
                }
            }

        }
        if(op.size() == 0)
        {
            return true;
        }
        return false;
    }
};