// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=featured-list&envId=top-interview-questions?envType=featured-list&envId=top-interview-questions
// 34. Find First and Last Position of Element in Sorted Array
#include <bits/stdc++.h>

class Solution {
public:
    int first = INT_MAX - 1, last = -1;

    std::vector<int> searchRange(std::vector<int>& nums, int target) 
    {
        binarySearch(0, nums.size()-1, target, nums, 0); 
        binarySearch(0, nums.size() -1, target, nums, 1); 
        if(last==-1) return std::vector<int> ({-1, -1});    
        return std::vector<int> ({first, last});

        

    }
    int binarySearch(int start, int end, int target, std::vector<int>& nums, int direction)
    {
        if(start > end) return -1; 
        int mid = start + (end - start)/2; 
        if(nums[mid] == target){
            if(direction == 0){
                first = std::min(mid, first);
                return binarySearch(start, mid-1, target, nums, direction); 
            }
            else{
                last = std::max(mid, last);
                return binarySearch(mid+1, end, target, nums, direction);
            }
        }
        else if(nums[mid] < target) return binarySearch(mid+1, end, target, nums, direction);
        else return binarySearch(start, mid-1, target, nums, direction); 
    }
};

/* Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]*/