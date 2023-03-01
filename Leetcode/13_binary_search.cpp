// https://leetcode.com/problems/binary-search/description/?envType=study-plan&id=level-1
// 28/02/23
#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {

        int front = 0, end = nums.size() - 1, mid = (front + end)/2; 
        while(front <= end)
        {
            if (target == nums[mid]) 
                return mid; 
            if (target > nums[mid]) 
                front = mid +1; 
            else 
                end = mid - 1; 
            
            mid = (front + end)/2; 
        }
        return -1; 
    }
};