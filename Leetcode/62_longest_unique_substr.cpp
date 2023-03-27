// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// 26/03/23 

#include <bits/stdc++.h>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s)
    {
        int map[256]{}; 
        int size{0}, back{0}, max_size{0}; 

        for(int i = 0; i < s.size(); i++){
            max_size = std::max(size, max_size); 
            map[s[i]]++; 

            while(map[s[i]] > 1)
                map[s[back]]--, 
                back++, 
                size--; 
                  
            size++; 
            max_size = std::max(size, max_size); 
        }
        return max_size;
    }
};


// wjpwke