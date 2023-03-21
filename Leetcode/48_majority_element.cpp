// https://leetcode.com/problems/majority-element/
#include <bits/stdc++.h>

class Solution {
public:
    int majorityElement(std::vector<int>& nums)
    {
        int mode{nums[0]}, counter{1}; 
        for(int i = 1; i < nums.size(); i++){
        if(!counter) mode = nums[i]; 

        if(mode == nums[i]) counter++; 
        else                counter--; 
        }
        return mode; 
    }
};


/* first solution
class Solution {
public:
    int majorityElement(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end()); 
        return nums[(nums.size() - 1)/2]; 
    }
};

*/