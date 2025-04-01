#include <bits/stdc++.h>

class Solution {
    public:
        int findMaxLength(std::vector<int>& nums) {
            int answ = 0, curr = 0; 
            std::unordered_map<int, int> count; 
            count[0] = -1; 
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == 0) curr--; 
                if(nums[i] == 1) curr++; 

                if(count.contains(curr)){
                    answ = std::max(answ, i - count[curr]); 
                }
                else count[curr] = i; 
            }

            return answ; 
        }
    };