#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> answ = {nums[0]}; 

        for(int i = 1; i < nums.size(); i++){
            answ.push_back(answ[i-1] + nums[i]); 
        }
    return answ; 
    }
};