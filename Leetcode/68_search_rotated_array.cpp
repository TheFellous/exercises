// https://leetcode.com/problems/search-in-rotated-sorted-array/description/
// 17/04/23 - 33. Search in Rotated Sorted Array
#include <bits/stdc++.h>

class Solution {
public:
    int search(std::vector<int>& nums, int target) 
    {
        int front = 0, end = nums.size() - 1, mid = front + (end - front)/2;
        while(front <= end)
        {
            mid = front + (end - front)/2;
            if(nums[mid] == target) return mid; 

            if( (nums[mid] >= nums[front] && target >= nums[front] && target <= nums[mid])
            ||  (nums[mid] < nums[front] && (target < nums[mid] || target  > nums[end])) )
                end = mid - 1; 
            else
                front = mid + 1; 
        }
        return -1; 
    }
}; 
//  [3, 1]
//  [4,5,6,7,0,1,2], 0
// 