/*You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average 
value and return this value. Any answer with a calculation error less than 10-5 will be accepted.
*/
#include <bits/stdc++.h>

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        double sum = 0, max_sum = 0; 
        for(int j = 0; j < k; j++){
            sum += nums[j]; 
        }
        max_sum = sum; 
        for(int i = k; i < nums.size(); i++) {
            
            sum+= nums[i] - nums[i - k]; 

            if(sum > max_sum) max_sum = sum; 
        }
        return max_sum/k; 
    }
};