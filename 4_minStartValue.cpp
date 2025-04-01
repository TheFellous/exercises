#include <bits/stdc++.h>

class Solution {
public:
    int minStartValue(std::vector<int>& nums) {
        int minValue = 0, sum = 0; 
        
        for(int i = 0; i < nums.size(); i++) {
            sum+=nums[i]; 
            minValue = std::max(minValue, -sum); 
        }
        return 1 + minValue; 
    }
};