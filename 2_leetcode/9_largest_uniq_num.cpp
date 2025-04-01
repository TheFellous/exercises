#include <bits/stdc++.h>

class Solution {
    public:
        int largestUniqueNumber(std::vector<int>& nums) {
            std::unordered_map<int, int> counter; 
            for(int i : nums) {
                counter[i]++; 
            }
            int max = -1; 
            for(auto& [key, val] : counter){
                if(val == 1){
                    max = std::max(max, key); 
                }
            }
            return max; 
        }
    };