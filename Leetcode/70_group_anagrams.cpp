// https://leetcode.com/problems/group-anagrams/
// 28/04/23 - 49. Group Anagrams
#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) 
    {
        std::vector<std::vector<std::string>> answ; 
        std::map<std::map<char, int>, std::vector<std::string>> mapa{}; 
        std::map<char, int> counter; 

        for(int i = 0; i < strs.size(); i++){
            counter = {};
            for(char c : strs[i])
                counter[c]++;
            
            mapa[counter].push_back(strs[i]);
        }
        for(std::map<std::map<char, int>, std::vector<std::string>>::iterator i = mapa.begin(); i != mapa.end(); i++)
            answ.push_back(i->second);

        return answ; 
    }
};