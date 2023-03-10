// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// 10/03/23 
#include <bits/stdc++.h>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        int j{0}; 
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] != nums[j])
                j++, 
                nums[j] = nums[i]; 

        return j + 1; 
    }  
}; 