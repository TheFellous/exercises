// https://leetcode.com/problems/move-zeroes/
// 24/03/23

#include <bits/stdc++.h>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) 
    {
        int i{0}, j{0}, aux; 
            
        while(i < nums.size() && j < nums.size()){
            
            if(nums[j] != 0) j++; 
            if(nums[i] == 0) i++; 
            if(i < j) i = j + 1; 
            if(i >= nums.size() || j >= nums.size()) break;

            if(nums[i] != 0 && nums[j] == 0){
                nums[j] = nums[i]; 
                nums[i] = 0; 
            }
        }   
    }
};