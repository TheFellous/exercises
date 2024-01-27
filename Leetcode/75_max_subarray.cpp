// https://leetcode.com/problems/maximum-subarray/description/?envType=featured-list&envId=top-interview-questions?envType=featured-list&envId=top-interview-questions
// 53. Maximum Subarray
#include <bits/stdc++.h>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) 
    {
        if(nums.size() == 0) return 0; 
        int current_sum = 0; 
        int max_sum = INT_MIN + 1; 
        for(int num : nums){
            current_sum = std::max(num, max_sum + num); 
            max_sum = std::max(max_sum, current_sum); 
        }
        return max_sum; 
    }


};
