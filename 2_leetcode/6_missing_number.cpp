#include <bits/stdc++.h>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int total = nums.size(); 
        int val=0; 
        for(int i = 0; i < nums.size(); i++) {
            total+=i; 
            val+=nums[i]; 
        }
        return total - val; 


    }
};