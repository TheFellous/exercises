#include <bits/stdc++.h>

class Solution {
    public:
        bool canConstruct(std::string ransomNote, std::string magazine) {
            std::unordered_map<char, int> ransomMap, magaMap; 
            for(char c : ransomNote) {
                ransomMap[c]++; 
            }
            for(char c : magazine){
                magaMap[c]++; 
            }

            for( auto& [key, value]: ransomMap){
                if(magaMap[key] < value)
                    return false; 
            }
            return true; 
            
        }
    };