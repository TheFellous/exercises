// https://leetcode.com/problems/roman-to-integer/
// 09/03/23 
#include <bits/stdc++.h>

class Solution {
public:
    int romanToInt(std::string s)
    {
        
        std::map<char, int> conv {{'I', 1},{'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 100}, {'M', 1000}}; 
        int answ{0};   
        for(int i = 0; i < s.size(); i++)
        {
            if(conv[s[i + 1]] > conv[s[i]])
                answ+= conv[s[i + 1]] - conv[s[i]], 
                i++; 
            else answ+= conv[s[i]]; 
        }
        return answ; 
    }

};