#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> getAverages(std::vector<int>& nums, int k) {
        std::vector<int> answ(nums.size(), -1); 

        if (2 * k + 1 > nums.size()) return answ;  

        long long sum = 0; 

        for(int i = 0; i < 2 * k + 1; i++) {
            sum += nums[i]; 
        }

        for(int i = k; i < nums.size() - k; i++) {  
            answ[i] = sum / (2 * k + 1); 

            if (i + k + 1 < nums.size())  
                sum += nums[i + k + 1]; 

            sum -= nums[i - k]; 
        }
        return answ; 
    }
};