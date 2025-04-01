#include <bits/stdc++.h>

class Solution {
    public:
        int lengthOfLongestSubstring(std::string s) {
            std::unordered_map<int, int> counts; 
            int  max_length = 0, left = 0; 
            for(int i = 0; i < s.size(); i++){

                if(counts[s[i]] == 1){
                    while(s[left] != s[i]){
                        counts[s[left]]--; 
                        left++; 
                    }
                    left++; 
                }
                else{
                    max_length = std::max(max_length, i - left + 1); 
                    counts[s[i]]++; 
                }

            }
            return max_length; 
        }
    };