// https://leetcode.com/problems/valid-anagram/
// 24/03/23 

#include <bits/stdc++.h>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) 
    {
        int aux[26]{}; 
        if(s.size() != t.size()) return false; 

        for(int i = 0; i < s.size(); i++)
            aux[s[i] - 'a']++, 
            aux[t[i] - 'a']--; 
        
        for(int i = 0; i < 26; i++) 
            if (aux[i] != 0) return false; 
        
        return true; 

    }
};
/* using map
class Solution {
public:
    bool isAnagram(std::string s, std::string t) 
    {
        std::map<char, int> s_map{}; 
        if(s.size() != t.size()) return false; 
        for(char c : s) 
            if (s_map.count(c)) s_map[c]++; 
            else s_map[c] = 1; 
        
        for(char c : t) 
            if(s_map[c] == 1) s_map.erase(c); 
            else if(s_map[c] > 1) s_map[c]--; 
            else return false; 
            
        return true; 
    }
};*/