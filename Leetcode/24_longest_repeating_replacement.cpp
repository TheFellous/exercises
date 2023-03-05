// https://leetcode.com/problems/longest-repeating-character-replacement/?envType=study-plan&id=level-1
// 05/03/23
#include <bits/stdc++.h>
class Solution {
public:
    int characterReplacement(std::string s, int k)
    {
        std::vector<int> map(32); 
        if (k >= s.size()) return s.size(); 
        int fuller{s[0] - 'A'}, back{0}, front{0}, max_L{0}, cur_size{front - back};       
        while(front < s.size())
        {
            map[s[front] - 'A']++;
            if(map[s[front] - 'A'] > map[fuller]) fuller = s[front] - 'A'; 

            if((cur_size)>= map[fuller] + k) {
                map[s[back] - 'A']--;
                back++;
                cur_size--; 
            }
            front++; 
            cur_size++;
            max_L = std::max(max_L, cur_size); 
        }
        return max_L;
    }
};
