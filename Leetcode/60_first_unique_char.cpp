// https://leetcode.com/problems/first-unique-character-in-a-string/
// 25/03/23 

#include <bits/stdc++.h>

class Solution {
public:
    int firstUniqChar(std::string s) {
        int counter[26] {};
        
        for(char c : s) 
            counter[c - 'a']++;    
        
        for(int i = 0; i < s.size(); i++)
            if(counter[s[i] - 'a'] == 1) return i; 
        
        return -1; 
                
    }
};