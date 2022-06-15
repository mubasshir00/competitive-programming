#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if(st.empty()){
                st.push(s[i]);
            }
            else if (s[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (s[i] == '}' && st.top() == '{' )
            {
                st.pop();
            }
            else if (s[i] == ']' && st.top() == '[' )
            {
                st.pop();
            }
            else 
            {
                st.push(s[i]);
            }
        }
        // cout << s.size() << endl;
        if(st.size()==0){
            return true;
        } else {
            return false;
        }
    }
};
