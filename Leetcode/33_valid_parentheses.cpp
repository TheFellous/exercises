// https://leetcode.com/problems/valid-parentheses/
// 09/03/23 
#include <bits/stdc++.h>

class Solution {
public:
    bool isValid(std::string s)
    {
        std::map<char, char> container{{'(', ')'}, {'[', ']'}, {'{', '}'}}; 
        std::map<char, char> reverse_container{{')', '('}, {']', '['}, {'}', '{'}}; 
        std::stack<char> aux;

        for(char c : s)
            if(container.count(c)) aux.push(c); 
            else if(!aux.empty() && aux.top() == reverse_container[c] && c == container[aux.top()]) aux.pop(); 
            else return false; 

        if (!aux.empty()) return false; 
        return true;        
    }
};