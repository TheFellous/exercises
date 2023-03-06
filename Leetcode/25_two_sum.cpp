// https://leetcode.com/problems/two-sum/?envType=study-plan&id=level-1
// 05/03/23
#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> map{}; 

        for(int i = 0; i < nums.size(); i++) {
            if(map.count(target - nums[i]) == 0)
                map[nums[i]] = i;
            else return{map[target - nums[i]],i}; 
        }
        return {}; 
    }
};