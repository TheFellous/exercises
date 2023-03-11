// https://leetcode.com/problems/merge-sorted-array/
// 11/03/23
#include <bits/stdc++.h>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1; 

        while (j >= 0) 
            if (i >= 0 && nums1[i] > nums2[j])
                nums1[i + j + 2] = nums1[i--]; 
            else
                nums1[i + j + 2] = nums2[j--];       
    }
};