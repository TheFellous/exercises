// https://leetcode.com/problems/backspace-string-compare/?envType=study-plan&id=level-1
// 06/03/23 
#include <bits/stdc++.h> 

class Solution {
public:
    bool backspaceCompare(std::string s, std::string t)
    {
        std::stack<char> str1, str2; 
        reformString(s, str1); 
        reformString(t, str2); 

        if (str1.size() != str2.size()) return false; 
        while(!str1.empty()){
            if(str1.top() != str2.top()) return false; 
            str1.pop(); 
            str2.pop(); 
        }
        return true; 
    }

    void reformString(std::string s, std::stack<char> &str)
    {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '#')       str.push(s[i]); 
            else if(!str.empty()) str.pop(); 
        }
    }
};

// stack 