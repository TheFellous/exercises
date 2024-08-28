// 1768. Merge Strings Alternately
#include <bits/stdc++.h>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string a = ""; 
        for(int i = 0; i < std::min(word1.size(), word2.size()); i++)
            a+=word1[i], 
            a+=word2[i]; 
        if(word1.size() > word2.size())
            for(int i = word2.size(); i < word1.size(); i++)
                a+=word1[i]; 
        else if(word1.size() < word2.size())
            for(int i = (word1.size()); i < word2.size();i++)
                a+=word2[i];

            
        return a; 
    }
};