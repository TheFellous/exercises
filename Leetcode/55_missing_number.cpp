// https://leetcode.com/problems/missing-number/
// 24/03/23
#include <bits/stdc++.h>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int answ = 0, last = true; 

        for(int i = 0; i < nums.size(); i++)
        {
            answ = answ ^ i; 

            if(nums[i] != nums.size()) answ = answ ^ nums[i]; 
            else                       last = false; 
        }
        if(last)
            return nums.size();  

        return answ; 

    }
};