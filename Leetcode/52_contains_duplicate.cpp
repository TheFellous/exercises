// https://leetcode.com/problems/contains-duplicate/
// 23/03/23
#include <bits/stdc++.h>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) 
    {
        std::set<int> aux{}; 

        for(int i = 0; i < nums.size(); i++)
        {
            if(aux.count(nums[i])) return true; 
            aux.insert(nums[i]);
        }
        return false; 
    }
};