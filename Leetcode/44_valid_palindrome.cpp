// https://leetcode.com/problems/valid-palindrome/
// 18/03/23 
#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(std::string s)
    {
        std::string aux = ""; 
        for(char c : s) {
            if(c > 64 && c < 91) c+= 32; 
            if((c > 96 && c < 123) || (c > 47 && c < 58)) aux+= c; 
        }
        for(int i = 0; i < aux.size()/2; i++)
            if(aux[i] != aux[aux.size() - i - 1])
                return false;
        
        return true; 
    }
};