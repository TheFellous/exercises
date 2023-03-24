// https://leetcode.com/problems/reverse-string/
// 24/03/23 

#include <bits/stdc++.h>

class Solution {
public:
    void reverseString(std::vector<char>& s) 
    {
        char aux; 
        for(int i = 0; i < s.size()/2; i++){
            aux = s[s.size() - 1 - i]; 
            s[s.size() - 1 - i] = s[i]; 
            s[i] = aux; 
        }
    }
};