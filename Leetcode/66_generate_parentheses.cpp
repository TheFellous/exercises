// https://leetcode.com/problems/generate-parentheses/description/
// 02/04/23 - 22. Generate Parentheses

#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> answ{}; 
        std::string outputs = ""; 
        solve(answ, outputs, n, n); 

        return answ; 
    }
private: 
    void solve(std::vector<std::string>& answ, std::string p, int i, int j)
    {
        if(!i && !j){
            answ.push_back(p); 
            return; 
        }
        if (i > 0)
            solve(answ, p + "(", i - 1, j); 
        if (j > 0 && j > i)
            solve(answ, p + ")", i, j -1); 
    }
};


// n = 3 - ["((()))","(()())","(())()","()(())","()()()"] || 

// ((())), 
// n = 2 ["(())", "()()"]  - 
// (())